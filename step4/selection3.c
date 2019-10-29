#include <stdio.h>
int main(void){
    int number=0;
    printf("Input an integer number\n>>");
    scanf("%d",&number);
    switch ( number % 3 ) {
        case 0:
            printf("Remainder is 0.\n");
            break;
        case 1:
            printf("Remainder is 1.\n");
            break;
        case 2:
            printf("Remainder is 2.\n");
            break;
        default:
            printf("Invalid value.\n");
            break;
    }
}
