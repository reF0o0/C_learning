#include <stdio.h>
int main(void) {
    int m = 5;
    printf("m / 2 = %d\n", m / 2);
    printf("(float)(m / 2) = %f\n", (float)(m / 2));
    printf("(float)m / 2 = %f\n", (float)m / 2);
    printf("m = %d\n", m);
    return 0;
}

/*
转换规则：
char,short -> int -> unsigned int -> long -> unsigned long -> double -> long double
float -> double
*/
