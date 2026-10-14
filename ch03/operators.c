#include <stdio.h>
int main(void) {
    printf("%d\n", 11 % (-5));
    printf("%d\n", (-11) % 5);
    printf("%d\n", (-11) % (-5));

    int x = 153, b0, b1, b2, sum;
    b2 = x / 100;
    b1 = (x - b2 * 100) / 10;
    b0 = x % 10;
    sum = b2 + b1 + b0;
    printf("sum = %d\n", sum);

    int n = 1, m = 1;
    n *= m + 1;
    // 等价于 n = n * (m+1)
    // 不等价于 n = n * m + 1
    printf("n = %d\n", n);

    int a = 3;
    printf("a = %d\n", a += a -= a * a);
    a = 3;
    printf("a = %d\n", a += a -= a *= a);

    n = 3;
    printf("%d\n", n++); // 先 print n，后运行 n++
    printf("%d\n", ++n); // 先运行 ++n，后 print n
    // 前缀和后缀，前缀先参与计算

    n = 3;
    m = -n++;              // ++ 为后缀，后参与运算
    printf("m = %d\n", m); // 将 n 赋值 m
    printf("n = %d\n", n); // 后执行 n++
    return 0;
}

/*
算数运算符
- 相反数
* 乘法
/ 除法
% 求余  操作数必须为整型
+ 加法
- 减法

赋值运算符
+=
-=
*=
/=
%=

自增自减运算符
++
--
*/
