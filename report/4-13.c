#include <stdio.h>
int main(void){
    int number,sum=0;
    printf("n‚Ì’lF");
    scanf("%d", &number);
    for (int i = 0; i <= number; i++) {
        sum=sum+i;
    }
    printf("%d ",sum);
}
