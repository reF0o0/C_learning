#include <stdio.h>
void findMaxMin(int a, int b, int *q, int *p);
int main(void) {
    int x = 15, y = 38;
    int max, min;

    findMaxMin(x, y, &max, &min);

    printf("max = %d\n", max);
    printf("min = %d\n", min);

    return 0;
}

void findMaxMin(int a, int b, int *q, int *p) {
    if (a > b) {
        *q = a;
        *p = b;
    } else {
        *q = b;
        *p = a;
    }
}
