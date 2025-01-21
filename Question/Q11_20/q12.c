// 判断101-200之间有多少个素数，并输出所有素数。
//判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除，则表明此数不是素数，反之是素数。

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
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
    bool is_prime[MAX + 1];
    sieve_of_eratosthenes(is_prime);

    for(int i = 101; i <= 200; i++){
        if(is_prime[i]){
            printf("%d ", i);
        }
    }

    return 0;
}