#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int goal = 1;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int index1 = 0;
    int index2 = (int)sizeof(arr) / sizeof(arr[0]) - 1;
    while (index1 <= index2) {
        if (arr[index1 + (index2 - index1) / 2] < goal) {
            index1 += (index2 - index1) / 2 + 1;
        } else if (arr[index1 + (index2 - index1) / 2] > goal) {
            index2 = index1 + (index2 - index1) / 2 - 1;
        } else {
            printf("查询目标坐标：%d\n", index1 + (index2 - index1) / 2);
            exit(0);
        }
    }
    printf("没查询到目标");
    return 1;
}
