// 有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

#include <stdio.h>

int main() {
    int h, m, l, count = 0;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            for (int k = 1; k <= 4; k++) {
                if (i != j && i != k && j != k) {
                    count++;
                    printf("%d%d%d\n", i, j, k);
                }
            }
        }
    }
    printf("There are %d such numbers.\n", count);

    return 0;
}