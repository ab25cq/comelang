#include <avr/io.h>
#include <string.h>
#include <stdio.h>
#include <avr/io.h>
#include <util/delay.h>

#define LED1_PIN PB5  // On-board LED
#define LED2_PIN PB4  // 外部LED

#define STACK_MAX 128

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
    
    _delay_ms(5000);
}

struct sTaskState {
    void (*fun)();
    
    volatile uint16_t program_counter;
    volatile uint16_t stack_pointer;
    volatile uint8_t status_register;
    volatile uint16_t x_register;
    volatile uint16_t y_register;
    volatile uint16_t z_register;
    volatile uint8_t* registers[32];
};

#define TASK_MAX 3

struct sTaskState gTasks[TASK_MAX];
int gNumTasks = 0;
int gCurrentTask = 0;

char gStack[TASK_MAX][STACK_MAX];

void save_registers(int task_num)
{
    struct sTaskState* task = gTasks + task_num;
       
    asm volatile (
        "call 1f              \n\t" // スタックにPCをプッシュ
        "1:                   \n\t" // スタックにPCをプッシュ
        :
        :
        : "memory"
    );

    uint16_t stack_pointer; // スタックポインタを保存する変数

    asm volatile (
        "in r24, __SP_L__    \n\t"   // SPL（下位バイト）をr24にロード
        "in r25, __SP_H__    \n\t"   // SPH（上位バイト）をr25にロード
        "mov %A0, r24        \n\t"   // r24をstack_pointerの下位バイトに保存
        "mov %B0, r25        \n\t"   // r25をstack_pointerの上位バイトに保存
        : "=r" (stack_pointer)     // 出力オペランド
        :
        : "r24", "r25"    // 使用するレジスタを明示
    );

    task->stack_pointer = stack_pointer;
}

void restore_registers(int task_num)
{
    struct sTaskState* task = gTasks + task_num;
    
    // スタックポインタを復元
    uint16_t stack_pointer = task->stack_pointer;
    
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
}

void init_task(void (*fun)())
{
    struct sTaskState* task = gTasks + gNumTasks++;
    memset(task, 0, sizeof(struct sTaskState));

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
    
    uint16_t stack_pointer = (uint16_t)(gStack[gNumTasks-1] + STACK_MAX);

    asm volatile (
        "mov r24, %A0       \n\t"
        "mov r25, %B0       \n\t"

        "out __SP_L__, r24     \n\t"
        "out __SP_H__, r25     \n\t"
        :
        : "r" (stack_pointer)       // スタックポインタの変数を指定
        : "r24", "r25"          // 使用するレジスタを指定
    );
       
    uint16_t program_counter = (uint16_t)fun;
    asm volatile (
        "mov r24, %A0       \n\t"
        "push r24           \n\t" // 下位バイトをスタックにプッシュ
        "mov r25, %B0       \n\t"
        "push r25           \n\t" // 上位バイトをスタックにプッシュ
        :
        : "r" (program_counter)
        : "r24", "r25", "memory"
    );

    asm volatile (
        "in r24, __SP_L__    \n\t"   // SPL（下位バイト）をr24にロード
        "in r25, __SP_H__    \n\t"   // SPH（上位バイト）をr25にロード
        "mov %A0, r24        \n\t"   // r24をstack_pointerの下位バイトに保存
        "mov %B0, r25        \n\t"   // r25をstack_pointerの上位バイトに保存
        : "=r" (stack_pointer)     // 出力オペランド
        :
        : "r24", "r25"    // 使用するレジスタを明示
    );

    task->stack_pointer = stack_pointer;

    asm volatile (
        "mov r24, %A0       \n\t"
        "mov r25, %B0       \n\t"

        "out __SP_L__, r24     \n\t"
        "out __SP_H__, r25     \n\t"
        :
        : "r" (stack_pointer_saved)   // スタックポインタの変数を指定
        : "r24", "r25"          // 使用するレジスタを指定
    );
}

void task_yield()
{
    save_registers(gCurrentTask);

    gCurrentTask ++;
    if(gCurrentTask >= gNumTasks) {
        gCurrentTask = 0;
    }
    
    restore_registers(gCurrentTask);
}

void task_sleep(int n)
{
    volatile int i;
    for(i=0; i<n; i++) {
        if(i % 1000 == 0) {
            task_yield();
        }
    }
}

void led1_pika()
{
    char buf[64];
    snprintf(buf, 64, "led1_pika!!! \r\n");
    
    USART_TransmitString(buf);
    
    struct sTaskState* task = gTasks + 1;
    
    // スタックポインタを復元
    uint16_t stack_pointer = task->stack_pointer;
    
    asm volatile (
        "mov r24, %A0       \n\t"
        "mov r25, %B0       \n\t"

        "out __SP_L__, r24     \n\t"
        "out __SP_H__, r25     \n\t"
        :
        : "r" (stack_pointer)    // スタックポインタの変数を指定
        : "r24", "r25"          // 使用するレジスタを指定
    );
    
    snprintf(buf, 64, "led1_pika!!! ret \r\n");
    
    USART_TransmitString(buf);
    
    asm volatile (
        "ret      \n\t"
    );
    
//    task_yield();
    //task_yield();
//    task_yield();
//    task_sleep(5000);
    
    // LED1消灯
//    PORTB = 0x00;
//    task_sleep(5000);
}

void led2_pika()
{
    char buf[64];
    snprintf(buf, 64, "led2_pika!!!");
    
    USART_TransmitString(buf);
    
    struct sTaskState* task = gTasks + 0;
    
    // スタックポインタを復元
    uint16_t stack_pointer = task->stack_pointer;
    
    asm volatile (
        "mov r24, %A0       \n\t"
        "mov r25, %B0       \n\t"

        "out __SP_L__, r24     \n\t"
        "out __SP_H__, r25     \n\t"
        :
        : "r" (stack_pointer)    // スタックポインタの変数を指定
        : "r24", "r25"          // 使用するレジスタを指定
    );
    
    snprintf(buf, 64, "led2_pika!!! ret \r\n");
    
    USART_TransmitString(buf);
    
    asm volatile (
        "ret      \n\t"
    );
    
//    task_yield();
//    PORTB = 0x00;
//    task_yield();

    // LED1点灯、LED2消灯
//    PORTB |= (1 << LED2_PIN);
//    task_sleep(5000);

    // LED1消灯、LED2点灯
//    PORTB = 0x00;
//    task_sleep(5000);
}

int main(void) {
    USART_Init();
    
    char buf[64];
    snprintf(buf, 64, "main!!!\r\n");
    
    USART_TransmitString(buf);
    
    // LEDピンを出力モードに設定
    DDRB |= (1 << LED1_PIN) | (1 << LED2_PIN);
    
    init_task(led1_pika);
    init_task(led2_pika);
    
    snprintf(buf, 64, "init end!!!\r\n");
    
    USART_TransmitString(buf);
    
    struct sTaskState* task = gTasks + 0;
    
    // スタックポインタを復元
    uint16_t stack_pointer = task->stack_pointer;
    
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


