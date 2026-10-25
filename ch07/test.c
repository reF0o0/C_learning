#include <stdio.h>

int hour, minute, second;

void Update(void) {
    second++;
    if (second == 60) {
        second = 0;
        minute++;
    }
    if (minute == 60) {
        minute = 0;
        hour++;
    }
    if (hour == 24) {
        hour = 0;
    }
}

void Delay(void) {
    int t;
    for (t = 0; t < 100000000; t++)
        ; // 延迟
}

void Display(void) {
    printf("hour = %d, minute = %d, second = %d\n", hour, minute, second);
}

int main(void) {
    int i;

    for (i = 0; i < 1000000; i++) {
        Update();
        Display();
        Delay();
    }
    return 0;
}
