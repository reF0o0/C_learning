/*
Byte 字节
bit 位/比特

1 B = 8 bit
1 KB(千) = 1024 B = 2^10 B
1 MB(兆) = 1024 KB = 2^20 B
1 GB(吉/千兆) = 1024 MB = 2^30 B
1 TB(太) = 1024 GB = 2^40 B
1 PB(拍) = 1024 TB = 2^50 B
1 EB(艾) = 1024PB = 2^60 B
1 ZB(泽) = 1024EB = 2^70 B
1 YB(尧) = 1024ZB= 2^80 B

64位计算机：一次进行64位的运算
32位计算机：一次进行32位的运算

sizeof()运算符
sizeof 是c语言的关键字，不是函数名
*/

#include <stdio.h>
int main(void) {
    printf("Data type       Number of bytes\n");
    printf("----------      ---------------\n");
    printf("char            %zu\n", sizeof(char));
    printf("int             %zu\n", sizeof(int));
    printf("short int       %zu\n", sizeof(short));
    printf("long int        %zu\n", sizeof(long));
    printf("long long int   %zu\n", sizeof(long long));
    printf("float           %zu\n", sizeof(float));
    printf("double          %zu\n", sizeof(double));
    printf("long double     %zu\n", sizeof(long double));
    return 0;
}
// %I64 是 Visual studio 老版本使用，Mac 使用 %z
// z 就是「size_t」的意思   u 表示无符号
