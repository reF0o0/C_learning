#include <stdio.h>
int main(void) {
    char ch;
    printf("Press a key and then press Enter:");
    ch = getchar(); // 从键盘输入一个字符，以回车结束，将字符存入变量ch
    ch = ch + 32; //将大写字母转换为小写字母
    putchar(ch);
    putchar('\n'); //输出一个换行符
    return 0;

}

/*
转义符
\n 换行
\r 回车
\t 水平制表
\v 垂直制表
\a 响铃报警提示音
\" 一个双引号
\' 一个单引号
\\ 一个反斜线
\? 问号
*/
