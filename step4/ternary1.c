#include <stdio.h>
int main(void){
    double num1,num2,max_value,min_value;
    printf("Input 1nd number\n>>");
    scanf("%lf",&num1);
    printf("Input 2nd number\n>>");
    scanf("%lf",&num2);
    max_value = num1 > num2 ? num1 : num2 ;
    min_value = max_value == num1 ? num2 : num1 ;
    printf("%.2f %.2f",max_value,min_value);
}
