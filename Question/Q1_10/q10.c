// 打印楼梯，同时在楼梯上方打印两个笑脸。

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of steps: ");
    scanf("%d", &n);

    // 打印两个笑脸
    printf("☺☺\n");  // \1 是笑脸的 ASCII 码

    // 打印楼梯
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("▇");  // 使用方块字符表示楼梯
        }
        printf("\n");
    }

    return 0;
}
