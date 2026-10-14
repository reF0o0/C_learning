#include <stdio.h>
int main(void) {
    double r;
    printf("Input r:");
    scanf("%lf", &r); //以双精度实型从键盘输入半径的值   & 为取地址运算符
    printf("circumference = %f\n", 2 * 3.14159 * r); //类似 pi 这种在程序中直接使用的常数，称为幻数
    printf("area = %f\n", 3.14159 * r * r);
    return 0;
}

