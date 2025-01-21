// 输入三个整数x,y,z，请把这三个数由小到大输出。

#include <stdio.h>

int main() {
    int x, y, z, t;
    while (1) {
        printf("input three integers : ");
        scanf("%d", &x);
        if (x == 0)
            break;
        scanf("%d", &y);
        scanf("%d", &z);
        if (x > y) {
            t = x;
            x = y;
            y = t;
        } /*交换x,y的值*/
        if (x > z) {
            t = z;
            z = x;
            x = t;
        } /*交换x,z的值*/
        if (y > z) {
            t = y;
            y = z;
            z = t;
        } /*交换z,y的值*/
        printf("The sorted integers are : %d %d %d\n", x, y, z);
    }
    return 0;
}