#include <stdio.h>
int main(void){
    int number,cal,num;
    printf("®”‚ğ“ü—Í‚µ‚Ä");
    scanf("%d", &number);
    cal=1;
    for (int i = 0; i < number; i++) {
        for (int i = 0; i < number-cal; i++) {
            printf(" ");
        }
        for (int n = 0; n < (cal-1)*2+1; n++) {
            num=cal<(n+1)?cal*2-n-1:n+1;
            printf("%d",num);
        }
        printf("\n");
        cal++;
    }
}
