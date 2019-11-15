#include <stdio.h>
int main(void){
    int number,cal;
    printf("\n");
    scanf("%d", &number);
    number=4;
    cal=1;
    for (int i = 0; i < number; i++) {
        for (int i = 0; i < number-cal; i++) {
            printf(" ");
        }
        for (int i = 0; i < (cal-1)*2+1; i++) {
            printf("*");
        }
        printf("\n");
        cal++;
    }
}
