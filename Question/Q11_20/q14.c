// 将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。

#include <stdbool.h>
#include <stdio.h>

int main() {
    // 输入一个正整数
    int m;
    scanf("%d", &m);
    for (int j = 1; j <= m; j++) {
        int n = j;
        printf("%d=", n);
        if (n == 1)
            printf("1*1");

        int min = 2;
        int max = n;
        for (int i = 2; i <= n; i++) {
            if (max == i) {
                printf("1*%d", max);
                break;
            }
            if (n % i == 0) {
                if (n / i == 1) {
                    printf("%d", i);
                } else {
                    printf("%d*", i);
                }
                n /= i;
                i = min - 1;
            } else {
                min++;
            }
        }
        printf("\n");
    }

    return 0;
}