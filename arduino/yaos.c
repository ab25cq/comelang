#include <avr/io.h>
#include <string.h>
#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>

#define LED1_PIN PB5  // On-board LED
#define LED2_PIN PB4  // 外部LED

#define TASK_MAX 2
#define STACK_MAX 256

// ボーレート設定
#define BAUD 9600
#define BAUD_PRESCALE (((F_CPU / (BAUD * 16UL))) - 1)

// UART初期化関数
void USART_Init(void) {
    // ボーレートの設定
    UBRR0H = (uint8_t)(BAUD_PRESCALE >> 8);  // 上位バイト
    UBRR0L = (uint8_t)BAUD_PRESCALE;         // 下位バイト

    // データフレーム: 8ビットデータ, 1ストップビット, パリティなし
    UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);

    // 送信有効化, 受信有効化
    UCSR0B = (1 << RXEN0) | (1 << TXEN0);
}

// データ送信関数
void USART_Transmit(uint8_t data) {
    // 送信可能になるまで待機
    while (!(UCSR0A & (1 << UDRE0)));

    // データを送信レジスタに書き込む
    UDR0 = data;
}

// データ受信関数
uint8_t USART_Receive(void) {
    // データ受信完了を待機
    while (!(UCSR0A & (1 << RXC0)));

    // 受信したデータを返す
    return UDR0;
}

// 文字列送信関数
void USART_TransmitString(const char* str) {
    while (*str) {
        USART_Transmit(*str++);
    }
}

struct sTaskState {
    volatile uint16_t stack_pointer;
    volatile uint8_t status_register;
    volatile uint16_t x_register;
    volatile uint16_t y_register;
    volatile uint16_t z_register;
    volatile uint8_t* registers[32];
};


struct sTaskState gTasks[TASK_MAX];
int gNumTasks = 0;
int gCurrentTask = 0;

char gStack[TASK_MAX][STACK_MAX];

void init_task(void (*fun)())
{
    uint16_t main_stack_saved;
    uint16_t stack_pointer;
       
    asm volatile (
        "in r24, __SP_L__    \n\t"   // SPL（下位バイト）をr24にロード
        "in r25, __SP_H__    \n\t"   // SPH（上位バイト）をr25にロード
        "mov %A0, r24        \n\t"   // r24をstack_pointerの下位バイトに保存
        "mov %B0, r25        \n\t"   // r25をstack_pointerの上位バイトに保存
        : "=r" (main_stack_saved)     // 出力オペランド
        :
        : "r24", "r25"    // 使用するレジスタを明示
    );
    
    stack_pointer = (uint16_t)(gStack[gNumTasks] + STACK_MAX);

    asm volatile (
        "mov r24, %A0       \n\t"
        "mov r25, %B0       \n\t"

        "out __SP_L__, r24     \n\t"
        "out __SP_H__, r25     \n\t"
        :
        : "r" (stack_pointer)       // スタックポインタの変数を指定
        : "r24", "r25"             // 使用するレジスタを指定
    );
    
    asm volatile (
        "mov r24, %A0       \n\t"
        "push r24           \n\t" // 下位バイトをスタックにプッシュ
        "mov r25, %B0       \n\t"
        "push r25           \n\t" // 上位バイトをスタックにプッシュ
        :
        : "r" ((uint16_t)fun)
        : "r24", "r25", "memory"
    );

    gTasks[gNumTasks].stack_pointer = stack_pointer - 2;
    
    asm volatile (
        "mov r24, %A0       \n\t"
        "mov r25, %B0       \n\t"

        "out __SP_L__, r24     \n\t"
        "out __SP_H__, r25     \n\t"
        :
        : "r" (main_stack_saved)   // スタックポインタの変数を指定
        : "r24", "r25"          // 使用するレジスタを指定
    );
    
    gNumTasks++;
}

void task_yield()
{
    uint16_t stack_pointer;
    
    /// save registers ///
    asm volatile (
        "in r24, __SP_L__    \n\t"   // SPL（下位バイト）をr24にロード
        "in r25, __SP_H__    \n\t"   // SPH（上位バイト）をr25にロード
        "mov %A0, r24        \n\t"   // r24をstack_pointerの下位バイトに保存
        "mov %B0, r25        \n\t"   // r25をstack_pointerの上位バイトに保存
        : "=r" (stack_pointer)     // 出力オペランド
        :
        : "r24", "r25"   // 使用するレジスタを明示
    );

    gTasks[gCurrentTask].stack_pointer = stack_pointer;
    
    gCurrentTask ++;
    if(gCurrentTask >= gNumTasks) {
        gCurrentTask = 0;
    }
    
    // スタックポインタを復元
    stack_pointer = gTasks[gCurrentTask].stack_pointer;
    
    asm volatile (
        "mov r24, %A0       \n\t"
        "mov r25, %B0       \n\t"

        "out __SP_L__, r24     \n\t"
        "out __SP_H__, r25     \n\t"
        :
        : "r" (stack_pointer)    // スタックポインタの変数を指定
        : "r24", "r25"         // 使用するレジスタを指定
    );
}

void led1_pika()
{
    USART_TransmitString("led1_pka\r\n");
    task_yield();
    USART_TransmitString("led1 pika end\r\n");
    task_yield();
}

void led2_pika()
{
    USART_TransmitString("led2 pika\r\n");
    
/*
    char buf[64];
    
    snprintf(buf, 64, "(0) sp %04X %04X %04X %04X\r\n", gTasks[0].stack_pointer, *(uint16_t*)(gTasks[0].stack_pointer+1), *(uint16_t*)(gTasks[0].stack_pointer+3), *(uint16_t*)(gTasks[0].stack_pointer+5));
    USART_TransmitString(buf);
    snprintf(buf, 64, "(1) sp %04X %04X\r\n", gTasks[1].stack_pointer, *(uint16_t*)(gTasks[1].stack_pointer+1));
    USART_TransmitString(buf);
*/
    
    task_yield();
    
    USART_TransmitString("led2 pika end\r\n");
    _delay_ms(100000);
}

int main(void) {
    uint16_t stack_pointer_saved;
       
    asm volatile (
        "in r24, __SP_L__    \n\t"   // SPL（下位バイト）をr24にロード
        "in r25, __SP_H__    \n\t"   // SPH（上位バイト）をr25にロード
        "mov %A0, r24        \n\t"   // r24をstack_pointerの下位バイトに保存
        "mov %B0, r25        \n\t"   // r25をstack_pointerの上位バイトに保存
        : "=r" (stack_pointer_saved)     // 出力オペランド
        :
        : "r24", "r25"    // 使用するレジスタを明示
    );
    USART_Init();
    
    uint16_t stack_pointer;
    
    char buf[32];
    snprintf(buf, 32, "start main!!!\r\n");
    USART_TransmitString(buf);
    
    snprintf(buf, 32, "main stack pointer %04X\r\n", stack_pointer_saved+2);
    USART_TransmitString(buf);
    
    // LEDピンを出力モードに設定
    init_task(led1_pika);
    
    snprintf(buf, 32, "led1_pika %04X\r\n", led1_pika);
    USART_TransmitString(buf);
    
    snprintf(buf, 32, "(0)sp %04X %04X\r\n", gTasks[0].stack_pointer, *(uint16_t*)(gTasks[0].stack_pointer+1));
    USART_TransmitString(buf);
    
    init_task(led2_pika);
    
    snprintf(buf, 32, "led2_pika %04X\r\n", led2_pika);
    USART_TransmitString(buf);
    
    snprintf(buf, 32, "(0)new sp %04X %04X\r\n", gTasks[0].stack_pointer, *(uint16_t*)(gTasks[0].stack_pointer+1));
    USART_TransmitString(buf);
    snprintf(buf, 32, "(1)new sp %04X %04X\r\n", gTasks[1].stack_pointer, *(uint16_t*)(gTasks[1].stack_pointer+1));
    USART_TransmitString(buf);
    
    snprintf(buf, 32, "init end!!!\r\n");
    USART_TransmitString(buf);
    
    // スタックポインタを復元
    stack_pointer = gTasks[0].stack_pointer;
    
    asm volatile (
        "mov r24, %A0       \n\t"
        "mov r25, %B0       \n\t"

        "out __SP_L__, r24     \n\t"
        "out __SP_H__, r25     \n\t"
        :
        : "r" (stack_pointer)    // スタックポインタの変数を指定
        : "r24", "r25"          // 使用するレジスタを指定
    );
    
    asm volatile (
        "ret      \n\t"
    );
    
    while(1) {
    }

    return 0;
}


