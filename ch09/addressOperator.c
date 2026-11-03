#include <stdio.h>
int main(void) {
    int a = 10;

    printf("a的值：%d\n", a);
    printf("a的地址：%p\n", (void *)&a);

    int *p = &a;
    printf("%d\n", *p);

    *p = 20;
    printf("a = %d\n", a);
    printf("*p = %d\n", *p);
}

/*
a   变量
&a  a的地址
p   p存储的地址
*p  p指向的对象的值
&p  指针变量p自身的地址

*p = a
&a = p
*/
