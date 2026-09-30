#include <stdio.h>
int main(void) {
    int a;
    float b;
    char c;
    a = 1;
    b = 2.5;
    c = 'A';
    printf("a = %d\nb = %f\nc = %c\n", a, b, c);
    return 0;
}

/*
int main(void) {
    int a = 1;
    float b = 2.5;
    char c = 'A';
    return 0;
}
*/

/*
int main(void) {
    int a, b, c;  如果未对其进行初始化，那么该变量的值时一个随机数（静态变量和全局变量除外）
    int a = 0, b = 0, c = 0;
    int a = b = c = 0 错误示范
}
*/
