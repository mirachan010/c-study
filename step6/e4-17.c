#include <stdio.h>
int main(void){
    int number;
    printf("n‚Ì’lF");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++) {
        printf("%d‚Ì‚Qæ‚Í%d\n",i,i*i);
    }
}
