// 输入两个正整数m和n，求其最大公约数和最小公倍数。

#include <stdio.h>

int main() {
    int m, n, max, min;
    printf("Enter two positive integers: ");
    scanf("%d %d", &m, &n);
    max = m > n? m : n;
    min = m < n? m : n;
    while (max % min!= 0) {
        int temp = max % min;
        max = min;
        min = temp;//余数一定比除数小，所以每次更新max为min，min为余数
    }
    printf("The greatest common divisor is %d.\n", min);
    printf("The least common multiple is %d.\n", m * n / min);
    return 0;
}