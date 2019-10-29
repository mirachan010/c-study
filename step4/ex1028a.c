#include <stdio.h>
int main(void){
    double num1;
    int buf;
    printf("Input number\n>>");
    scanf("%lf",&num1);
    buf = ((int)(num1*10))%10>=5?(int)num1+1:(int)num1;
    printf("%d",buf);
}
