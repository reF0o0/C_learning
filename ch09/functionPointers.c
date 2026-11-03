#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int calculate(int x, int y, int (*func)(int, int));

int main(void) {
    int (*p)(int, int);

    p = add;
    //p = &add;

    printf("%d\n", p(10, 5));
    //(*p)(10, 20)

    p = sub;
    printf("%d\n", p(10, 5));

    p = mul;
    printf("%d\n", p(10, 5));

    printf("%d\n", calculate(10, 5, add));

    return 0;
}

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int calculate(int x, int y, int (*func)(int, int)) {
    return func(x, y);
}
