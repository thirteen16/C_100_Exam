#include <math.h>
#include <stdio.h>
#include <time.h>

int isSqrt(int n) {
    int flag = 0;
    // printf("%lf\n", sqrt(n));
    if (sqrt(n) - (floor)(sqrt(n)) == 0) {
        flag = 1;
    }
    return flag;
}

int main() {
    clock_t start, finish;
    // clock_t为CPU时钟计时单元数
    start = clock();
    // clock()函数返回此时CPU时钟计时单元数

    int sum = 0;
    for (int i = 0; i <= 10000; i++) {
        if (isSqrt(i)) {
            printf("%d is a perfect square\n", i);
            sum++;
        }
    }
    printf("完全平方数的个数: %d\n", sum);

    finish = clock();
    // clock()函数返回此时CPU时钟计时单元数
    printf("the time cost is:%f\n", (double)(finish - start) / CLOCKS_PER_SEC);
    // finish与start的差值即为程序运行花费的CPU时钟单元数量，再除每秒CPU有多少个时钟单元，即为程序耗时

    // system("pause");
    return 0;
}
