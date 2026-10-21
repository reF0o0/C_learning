#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int magic, guess, counter = 0;
    srand((unsigned int)time(NULL)); //创建随机数种子
    magic = rand() % 100 + 1; //rand 在环境相同的情况下会产生一样的数字
    do{
        printf("Please guess a magic number:");
        scanf("%d", &guess);
        counter++;
        if (guess > magic) {
            printf("Wrong! Too big!\n");
        } else if (guess < magic) {
            printf("Wrong!Too small!\n");
        } else {
            printf("Right!\n");
        }
    } while (guess != magic);
    printf("counter = %d\n", counter);
}
