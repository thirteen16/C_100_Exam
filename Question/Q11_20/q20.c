// 一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

#include <stdio.h>

int main() {
    double height = 100;
    int i = 1;
    double distance = 0;
    for (i = 1; i <= 10; i++) {
        distance += height;  // 下落距离
        height /= 2;         // 反弹高度减半
        if (i < 10) {        // 如果不是最后一次落地，需要加上反弹的距离
            distance += height;
        }
    }
    printf("第10次落地时共经过%.2lf米\n", distance);
    printf("第10次反弹多高%.2f米\n", height);
    return 0;
}