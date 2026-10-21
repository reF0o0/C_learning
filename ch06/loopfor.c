#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 5; i++) {
        printf("从1～5：%d\n", i);
    }

    //遍历数组
    int nums[] = { 1, 2, 3, 4, 5 };
    for (size_t i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
        printf("从1～5：%zu\n", i); //%zu     z:size_t 类型    u: 无符号十进制
    }
}

/*
for (int n: arrys) 不行
*/
