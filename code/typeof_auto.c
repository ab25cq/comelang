// Demonstrates GCC typeof and __auto_type
#include <stdio.h>
#include <stddef.h>

int main(void) {
    __auto_type a = 1;        // int
    __auto_type b = 2.5;      // double
    __typeof__(a + b) c = 0;  // typeof of expression (promotes to double)

    printf("[auto] sizeof(a)=%zu sizeof(b)=%zu sizeof(c)=%zu\n",
           sizeof(a), sizeof(b), sizeof(c));

    // Simple container_of using typeof (GCC extension)
    struct Pair { int x; double y; } p = { .x = 11, .y = 3.14 };
    double *py = &p.y;
    struct Pair *pp = ({
        const __typeof__(p.y) *__mptr = (py);
        (struct Pair *)((char *)__mptr - offsetof(struct Pair, y));
    });
    printf("[typeof] container_of -> x=%d, y=%.2f\n", pp->x, pp->y);

    return 0;
}
