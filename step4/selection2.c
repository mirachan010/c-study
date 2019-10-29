#include <stdio.h>
int main(void){
    double number;
    printf("Input number!\n>>");
    scanf("%lf",&number);
    printf("%d is ",(int)number);
    if(number > 0){
        printf("+ number\n");
    }
    else if( number < 0 ){
        printf("- number\n");
    }
    else if ( number == 0 ) {
        printf("0\n");
    }
}
