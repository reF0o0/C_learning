#include <stdio.h>
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    scanf("%2d%2d", &a, &b); //%2d 最多读取两个字符
    printf("a = \"%d\", b = \"%d\"\n", a, b); // \" 打印双引号
    scanf("%d%*c%d", &a, &b); //%*c 读取一个字符并丢弃它
    printf("a = %d, b = %d\n", a, b);
    scanf("%2d%*2d%2d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

//* 赋值抑制符
