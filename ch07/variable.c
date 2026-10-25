#include <stdio.h>

int total = 100; // 外部变量：定义在所有函数外面

void test(void) {
    auto int a = 0;         // 自动变量，auto 通常省略
    static int b;           // 静态局部变量，默认初始化为 0
    register int step = 1;  // 寄存器变量

    a += step;
    b += step;
    total += step;

    printf("a = %d, b = %d, total = %d\n", a, b, total);
}

int main(void) {
    test();
    test();
    return 0;
}

/*
自动变量
静态变量  值一直存在，但名字仍然只能在所在的代码块内使用
外部变量  定义在函数外，多个函数可以共同使用
寄存器变量  一种优化建议
自动变量每次重新创建；静态局部变量保留值，但作用域仍是局部；外部变量定义在函数外；register 不保证进入寄存器。
*/
