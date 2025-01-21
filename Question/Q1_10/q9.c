// 要求输出国际象棋棋盘。

#include <stdio.h>

int main() {
    int i, j;
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0)
                printf("██");  // 输出黑色方块
            else
                printf("  ");  // 输出白色方块（用空格表示）
        }
        printf("\n");
    }
    return 0;
}
