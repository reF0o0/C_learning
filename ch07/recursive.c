#include <stdio.h>
int factorial(int n);

int main(void) {
    int n = 3;
    printf("%d\n", factorial(n));
    return 0;
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1); //函数的递归
}
