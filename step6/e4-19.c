#include <stdio.h>
int main(void){
    int number,sum=0;
    printf("���������Ă�:");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++) {
        if (number%i==0) {
            printf("%d,",i);
            sum++;
        }
    }
    printf("\n�񐔂̌���%d",sum);
}
