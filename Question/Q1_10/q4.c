// 输入某年某月某日，判断这一天是这一年的第几天？

#include <stdio.h>

int main() {
    int year, month, day;
    printf("请输入年月日：");
    scanf("%d%d%d", &year, &month, &day);

    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    for (int i = 0; i < month - 1; i++) {
        sum += days[i];
    }
    sum += day;
    if (year % 4 == 0 && (year % 100!= 0 || year % 400 == 0)) {
        if(month > 2)
            sum++;
    }
    printf("%d年%d月%d日是这一年的第%d天。\n", year, month, day, sum);

    return 0;
}