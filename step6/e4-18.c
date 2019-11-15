#include <stdio.h>
int main(void){
    int number;
    printf("n‚Ì’lF");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++) {
        if (i>5) {
        if ((i-1)%5==0) {
            printf("\n");
        }
        }
        printf("*");
    }
}
