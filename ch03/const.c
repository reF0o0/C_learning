#include <stdio.h>
int main(void) {
    const double PI = 3.14159; //定义实型的 const 常量 PI ， const 常量不允许修改
    double r;
    printf("Input r:");
    scanf("%lf", &r);
    printf("circumference = %f\n", 2 * PI * r);
    printf("area = %f\n", PI * r * r);
    return 0;
}
