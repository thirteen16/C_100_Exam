// 一个数如果恰好等于它的因子之和，这个数就称为“完数”。例如6=1＋2＋3.编程找出1000以内的所有完数。

#include <stdio.h>

int main() {
    int i, j, n, sum = 0, count = 0;
    printf("完数：\n");

    for (j = 1; j <= 1000; j++) {
        n = j;
        sum = 0;
        for (i = 1; i < n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }

        if (sum == j) {
            printf("%5d", j);
            count++;
        }
    }

    printf("\n共有%d个完数。", count);

    return 0;
}