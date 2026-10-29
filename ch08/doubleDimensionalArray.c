#include <stdio.h>

int main(void) {
    int score[3][3] = {
        { 80, 90, 70 },
        { 60, 75, 90 },
        { 95, 85, 100}
    };

    for (int i = 0; i <= 2; i++) {
        int sum = 0;
        for (int j = 0; j <= 2; j++) {
            sum += score[i][j];
        }
        printf("学生%d，总分%d，平均分%.2f\n", i + 1, sum, sum / 3.0);
    }

    // int arr[][1] = {0}  赋空值

    return 0;
}
