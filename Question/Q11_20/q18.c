// 求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。

#include <stdio.h>  
#include <stdlib.h>  
#include<math.h>

int main() {  
    int a=0, i=0, n=0, s=0 ,temp=0;  
    printf("Enter a number: ");  
    scanf("%d", &a);  
    printf("Enter the number of times to add: ");  
    scanf("%d", &n);  
    for (i = 1; i <= n; i++) {
        temp = temp*10+a;
        printf("%d", temp);
        if(i!=n) printf("+");
        s += temp;
            
    }
    printf("\n");
    printf("The sum is: %d", s);  
    return 0;  
}