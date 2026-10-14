#include <stdio.h>
#define PI 3.14159 //定义宏常量 PI
//错误：#define PI = 3.14159; 宏常量会联通 = 和 ；一起替换
int main(void) {
    double r;
    printf("Input r:");
    scanf("%lf", &r);
    printf("circumference = %f\n", 2 * PI * r); //编译时PI被替换为 3.14159
    printf("area = %f\n", PI * r * r);
    return 0;
}
