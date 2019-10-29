#include <stdio.h>
int main(void){
    int no1,no2;
    printf("2つの整数を入力してください\n");
    printf("整数a:");
    scanf("%d",&no1);
    printf("整数b:");
    scanf("%d",&no2);
    printf("それらの和は%dで積は%dです",no1+no2,no1*no2);
}
