#include <stdio.h>
#include <stdlib.h>

int main(void) {
start:
    printf("你好！\n");
    printf("是否再输入一遍(y/n)\n");
    char c;
    scanf("%c", &c);
    getchar(); //注意缓存区的回车符
    if (c == 'y') {
        goto start;
    }
    return 0;
}
