#include <stdio.h>

int main(void) {
    int i = 0;
    while (i <= 5) {
        printf("这是%d\n", i);
        i++;
    }

    int j = 0;
    do {
        printf("这是%d\n", j);
        j++;
    } while (j <= 5); //注意有；
}

/*
当起始条件不满足时结果不一样
*/
