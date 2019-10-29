#include <stdio.h>
int main(void){
    int no1,no2,no3;
    printf("3つの整数を入力してください\n");
    printf("整数1:");
    scanf("%d",&no1);
    printf("整数2:");
    scanf("%d",&no2);
    printf("整数3:");
    scanf("%d",&no3);
    printf("%dと%dと%dの和は%dです。",no1,no2,no3,no1+no2+no3);
}
