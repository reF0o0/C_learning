#include <stdio.h>

int main(void) {
    int a, b, max, ret;
    printf("Input a, b:");
    ret = scanf("%d,%d", &a, &b); //记录scanf()函数的返回值
    if (ret != 2) { //根据scanf()函数的返回值，判断是否成功读入了指定数量的数据
        printf("Input error!\n");
    } else {
        max = a > b? a: b;
        printf("max = %d\n", max);
    }
    return 0;
}
