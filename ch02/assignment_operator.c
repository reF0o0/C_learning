#include <stdio.h>

int main(void) {
    int a, b, c;
    a = b = c = 0;
    // a = (b = (c = 0));   多重赋值，与上式等效
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);
    return 0;
}
