#include <stdio.h>
int main(void) {
    int score[5];
    int totalScore = 0;
    int i;
    printf("Input the scores of five students:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &score[i]);
        totalScore = totalScore + score[i];
    }
    printf("The average score is %.2f\n", totalScore / 5.0);
    for (size_t j = 0; j < sizeof(score)/sizeof(score[0]); j++) {
        printf("%d\n", score[j]);
    }
    return 0;
}
