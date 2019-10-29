#include <stdio.h>
int main(void){
    int num1,num2,num3,max,mid,min;
    scnum1nf("%d %d %d",&num1,&num2,&num3);
    max=num1>num2&&num1>num3?num1:num2>num3?num2:num3;
    mid=max==num1?num2>num3?num2:num3:max==num2?num1>num3?num1:num3:num1>num2?num1:num2;
    min=max==num1?mid==num2?num3:num2:max==num2?mid==num1?num3:num1:mid==num1?num2:num1;
    min=max==num1||mid==num1?max==num2||mid==num2?num3:num2:num1;
    printf("%d %d %d",max,mid,min);
}
