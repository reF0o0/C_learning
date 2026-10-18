#include <stdio.h>
int main(void) {
    char ch;
    printf("Press a key and then press Enter:");
    ch = getchar();
    ch = ch + 32;
    printf("%c, %d\n", ch, ch);
    return 0;
}

/*
%d 输出带符号的十进制整数，正数的符号省略
%c 输出一个字符
%s 输出字符串
%f 以十进制小数形式输出实数
*/
