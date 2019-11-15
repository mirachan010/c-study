#include <stdio.h>
int main(void){
    int number,cal;
    printf("\n");
    scanf("%d", &number);
    cal=number;
    for (int i = 0; i < number; i++) {
        for (int i = 0; i < cal; i++) {
            printf("*");
        }
        printf("\n");
        cal--;
    }
    cal=number;
    for (int i = 0; i < number; i++) {
        for (int i = 0; i < number-cal; i++) {
            printf(" ");
        }
        for (int i = 0; i < cal; i++) {
            printf("*");
        }
        printf("\n");
        cal--;
    }
}
