#include <stdio.h>
int main(void){
    int number,sum=0;
    printf("数字を入れてね:");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++) {
        if (number%i==0) {
            printf("%d,",i);
            sum++;
        }
    }
    printf("\n約数の個数は%d",sum);
}
