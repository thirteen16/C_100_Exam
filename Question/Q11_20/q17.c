// 输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

#include <stdio.h>

int main() {

    int i=0, count_e = 0, count_s = 0, count_d = 0, count_o = 0;
    char ch;
    printf("Enter a line of characters: \n");
    while((ch=getchar())!= '\n') {
        i++;
        
        if (ch >= 'a' && ch <= 'z') {
            count_e++;
        } else if (ch >= 'A' && ch <= 'Z') {
            count_e++;
        } else if (ch == ' ') {
            count_s++;
        } else if (ch >= '0' && ch <= '9') {
            count_d++;
        } else {
            count_o++;
        }
    }

    printf("Number of English letters: %d\n", count_e);
    printf("Number of spaces: %d\n", count_s);
    printf("Number of digits: %d\n", count_d);
    printf("Number of other characters: %d\n", count_o);

    return 0;
}