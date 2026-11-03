#include <stdio.h>
void swap(int *p, int *q);
int main(void) {
    int a = 10;
    int b = 20;

    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
void swap(int *p, int *q) {
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}
