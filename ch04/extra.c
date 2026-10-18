#include <stdio.h>
int main(void) {
    int data1, data2;
    char op;
    printf("Please enter the expression data1+data2\n");
    scanf("%d%c%d", &data1, &op, &data2);
    printf("%d%c%d = %d\n", data1, op, data2, data1 + data2);
    // 输入12 + 3 || 12 3

    int a;
    char b;
    float c;
    printf("please input an integer:");
    scanf("%d", &a);
    printf("integer: %d\n", a); // 输入数字后的回车进入缓冲区，被 b 读入
    // getchar(); 方法一：将存于缓冲区的回车符读入，避免在后面作为有效字符读入
    printf("Please input a character:");
    scanf("%c", &b);
    // scanf(" %c", &b); 在 %c 前面加一个空格，将存于缓冲区中的回车符读入
    printf("Please input a float number:");
    scanf("%f", &c);
    printf("float: %f\n", c);

    float temp;
    scanf("%8f", &temp);   // scanf 只接受宽度，不指定精度
    printf("%8.2f", temp); //%8.2f 表示输出宽度8个字符，保留两位小数

    scanf("%d\n", &a); // \n 会跳过后面的空白字符，按回车后光标换行并继续等待，输入一个非空白字符后按回车程序才会往下执行
    return 0;
}

/*
在用%c格式读入字符时，空白字符（包括回车）都会被当做有效字符读入
printf 的宽度是最小输出宽度，scanf 的宽度是最大读取宽度；%c 不跳过空白。
*/
