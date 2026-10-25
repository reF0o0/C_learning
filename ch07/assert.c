#include <assert.h>
#include <stdio.h>

int divide(int a, int b) {
    assert(b != 0); // 检查除数不能为 0
    return a / b;
}

int main(void) {
    printf("%d\n", divide(10, 2));
    // printf("%d\n", divide(10, 0)); // 启用这行会触发断言
    return 0;
}

//assert 条件为假时终止程序；定义 NDEBUG 后断言不再执行，条件表达式也不求值
