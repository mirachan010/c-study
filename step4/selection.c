#include <stdio.h>
int main(void){
    int number;
    printf("Input an integer number\n>>");
    scanf("%d",&number);
    if (number % 2){
        printf("It is an odd number.\n");
    }
    else{
        printf("It is not an odd number.\n");
    }
    return 0;
}
