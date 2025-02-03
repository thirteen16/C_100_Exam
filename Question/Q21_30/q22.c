// 两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x, z比，请编程序找出三队赛手的名单。

#include <stdio.h>

int main() {
    char a_team[] = {'a', 'b', 'c'};
    char b_team[] = {'x', 'y', 'z'};
    int match_found = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                // 确保三个比赛对手各不相同
                if (i != j && j != k && i != k) {
                    // 根据题目条件过滤
                    if (a_team[0] != b_team[0] && a_team[2] != b_team[0] && a_team[2] != b_team[2]) {
                        printf("比赛名单:\n");
                        printf("a 对阵 %c\n", b_team[i]);
                        printf("b 对阵 %c\n", b_team[j]);
                        printf("c 对阵 %c\n", b_team[k]);
                        match_found = 1;
                    }
                }
            }
        }
    }

    if (!match_found) {
        printf("没有找到符合条件的比赛名单。\n");
    }

    return 0;
}
