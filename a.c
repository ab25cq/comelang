#include <comelang.h>
#include <stdatomic.h>

# 4 "a.c"
typedef struct {
    _Atomic int locked;
} mutex_t;

void mutex_init(mutex_t *mutex) {
   __extension__ ({ __auto_type __atomic_store_ptr = (
   &mutex->locked
   ); __typeof__ ((void)0, *__atomic_store_ptr) __atomic_store_tmp = (
   0
   ); __atomic_store (__atomic_store_ptr, &__atomic_store_tmp, (5)); })
}
    /*
# 9 "a.c" 3
   __extension__ ({ __auto_type __atomic_store_ptr = (
# 9 "a.c"
   &mutex->locked
# 9 "a.c" 3
   ); __typeof__ ((void)0, *__atomic_store_ptr) __atomic_store_tmp = (
# 9 "a.c"
   0
# 9 "a.c" 3
   ); __atomic_store (__atomic_store_ptr, &__atomic_store_tmp, (5)); })
# 9 "a.c"
*/                                  ;

/*
void mutex_enter_blocking(mutex_t *mutex) {
    int expected = 0;
    while (!
# 14 "a.c" 3
           __extension__ ({ __auto_type __atomic_compare_exchange_ptr = (
# 14 "a.c"
           &mutex->locked
# 14 "a.c" 3
           ); __typeof__ ((void)0, *__atomic_compare_exchange_ptr) __atomic_compare_exchange_tmp = (
# 14 "a.c"
           1
# 14 "a.c" 3
           ); __atomic_compare_exchange (__atomic_compare_exchange_ptr, (
# 14 "a.c"
           &expected
# 14 "a.c" 3
           ), &__atomic_compare_exchange_tmp, 1, (5), (5)); })
# 14 "a.c"
                                                                     ) {
        expected = 0;
        __asm__ volatile("nop");
    }
}
*/

/*
void mutex_exit(mutex_t *mutex) {
    
# 21 "a.c" 3
   __extension__ ({ __auto_type __atomic_store_ptr = (
# 21 "a.c"
   &mutex->locked
# 21 "a.c" 3
   ); __typeof__ ((void)0, *__atomic_store_ptr) __atomic_store_tmp = (
# 21 "a.c"
   0
# 21 "a.c" 3
   ); __atomic_store (__atomic_store_ptr, &__atomic_store_tmp, (5)); })
# 21 "a.c"
                                  ;
}
*/





int main(int argc, char** argv) {
    static char *states[] = {
      [0]  "unused",
      [1]  "used",
      [2]  "sleep ",
      [3]  "runble",
      [4]  "run   ",
      [5]  "zombie"
    };
    
    printf("%ld\n", 1L <<39);
    
    return 0;
}
