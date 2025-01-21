#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#define MAX 10000

void sieve_of_eratosthenes(bool is_prime[]) {
    // 初始化所有数字为素数
    for (int i = 0; i <= MAX; i++) {
        is_prime[i] = true;
    }

    is_prime[0] = is_prime[1] = false;  // 0和1不是素数

    for (int p = 2; p * p <= MAX; p++) {
        // 如果 is_prime[p] 是真，那么它是素数
        if (is_prime[p]) {
            // 将 p 的倍数标记为非素数
            for (int i = p * p; i <= MAX; i += p) {
                is_prime[i] = false;
            }
        }
    }
}

int main() {
    clock_t start, end;
    double cpu_time_used;

    start = clock();  // 开始计时

    bool is_prime[MAX + 1];  // 用于存储1到10000的素数标记
    sieve_of_eratosthenes(is_prime);

    // 输出 10000 以内的所有素数
    printf("10000以内的素数有:\n");
    for (int i = 2; i <= MAX; i++) {
        if (is_prime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");

    end = clock();                                             // 结束计时
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;  // 计算CPU运行时间

    printf("CPU运行时间为：%f 秒\n", cpu_time_used);
    return 0;
}
