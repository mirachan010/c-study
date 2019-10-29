#include <stdio.h>
int main(void){
    double no1,no2;
    printf("2つの整数を入力してください\n");
    printf("整数x:");
    scanf("%lf",&no1);
    printf("整数y:");
    scanf("%lf",&no2);
    printf("xの値はyの%.0f%%です",no1/no2*100);
}
