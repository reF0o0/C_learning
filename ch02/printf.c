#include <stdio.h> //编译预处理命令
/*
 头文件 <stdio.h> 中 h = head, std = standard, i = input, o = output
编译预处理命令 #include 可使头文件 <stdio.h> 在程序中生效
作用：将写在尖括号内的头文件 stdio.h 包含到源文件中

c语言没有专门的输入/输出语句，要靠调用c的标准库库来实现
c的标准函数库中提供库函数
要在程序开头用编译预处理命令将包含标准输入输出函数的头文件 stdio.h 包含到源文件中
*/
int main(void) {
    int a = 1;
    float b = 2.5f;
    char c = 'A';
    // %d, %f, %c 都是格式字符
    printf("a = %d\n", a); // %d 表示按十进制整型格式输出变量的值
    printf("b = %f\n", b); // %f 表示按十进制小数格式输出变量的值
    printf("c = %c\n", c); // %c 表示输出字符型变量的值（一个字符）
    // \n 表示输出一个换行
    printf("End of program\n"); // 无变量直接输出字符串「（String)」
    return 0;
}
