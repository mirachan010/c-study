#include <stdio.h>
int main(void){
    int i,number=0,sum=0;
    printf("数字を入力してね\n");
    scanf("%d", &number);
    for (i = 1; i < number; i++) {
        sum+=i;
        printf("%d+",i);
    }
    printf("%d=%d\n",i,sum+i);
}
