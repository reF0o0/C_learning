#include <stdio.h>

int main(void) {
    //按位与 & 两个位置都是1，结果才是1
    int a;
    scanf("%d", &a);
    if (a & 1) { //判断奇偶
        printf("结果是奇数\n");
    } else {
        printf("结果是偶数\n");
    }

    //按位或 ｜ 有一个是1，结果就是1
    int b, c = 1;
    scanf("%d", &b);
    printf("偶数变奇数：%d -> %d\n", b, b | c);


    //按位异或 ^ 两个不一样，结果是1 两个一样，结果是0
    int result = 0; //与0异或会保持，与1异或会反转 与自身异或为0
    int nums[] = { 2, 3, 2 ,5, 3 };
    for (size_t i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
        result ^= nums[i];
    }
    printf("只出现一次的数字是：%d\n", result);
    // a ^ 1 会切换奇偶性

    //按位取反 ～ 1变为0，0变为1


    //左移位 <<
    printf("结果相当于乘2：%d -> %d\n", 4, 4 << 1);

    //右移位 >>
    printf("结果相当于处2：%d -> %d\n", 4, 4 >> 1); //结果向下取整

    return 0;
}
