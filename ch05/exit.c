#include <stdio.h>
#include <stdlib.h> //library 用于exit()
#include <math.h>
#define EPS 1e-6 //定义精度，用于浮点数
int main(void) {
    float a, b, c, disc, p, q;
    printf("Please enter the coefficients a,b,c:");
    scanf("%f,%f,%f", &a, &b, &c);
    if (fabs(a) <= EPS) { //fabs() 求绝对值
        printf("It is not a quadratic equation!\n");
        exit(0); // exit(code) 的作用是终止整个程序的执行，强制返回操作系统，当 code 的值为 0 时表示程序正常退出，非 0 时表示出现错误后退出
    }
    disc = b * b - 4 * a * c;
    p = -b / (2 * a);
    q = sqrt(fabs(disc)) / (2 * a);
    if (fabs(disc) <= EPS) {
        printf("x1 = x2 = %.2f\n", p);
    }
    else {
        if (disc > EPS) {
            printf("x1 = %.2f, x2 = %.2f\n", p + q, p - q);
        } else {
            printf("x1 = %.2f + %.2fi, ", p, q);
            printf("x1 = %.2f - %.2fi\n", p, q);
        }
    }
    return 0;
}
