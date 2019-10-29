#include <stdio.h>
int main(void){
    double num1,num2,buf,sum;
    printf("Input 1nd number\n>>");
    scanf("%lf",&num1);
    printf("Input 2nd number\n>>");
    scanf("%lf",&num2);
    buf = num1>0 ? num1 : num1 * ( -1 ) ;
    sum = num2>0 ? buf + num2 : buf + num2 * ( -1 ) ;
    printf("%.2f",sum);
}
