// 一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？

#include <math.h>
#include <stdio.h>
#include <time.h>

int isSqrt(int n) {
    int flag = 0;
    //printf("%lf\n", sqrt(n));
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
    
    int n;
    for (int i = 0;; i++) {
        if (isSqrt(i + 100) && isSqrt(i + 100 + 168)) {
            n = i;
            break;
        }
    }
    printf("%d\n", n);

    finish = clock();
    // clock()函数返回此时CPU时钟计时单元数
    printf("the time cost is:%f\n", (double)(finish - start) / CLOCKS_PER_SEC);
    // finish与start的差值即为程序运行花费的CPU时钟单元数量，再除每秒CPU有多少个时钟单元，即为程序耗时
    
    return 0;
}