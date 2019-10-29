#include <stdio.h>
int main(void){
    double get;
    printf("小数を含む実数を入力してください\n>>");
    scanf("%lf", &get);
    int Integer = (int)get;
    double Decimal = get - Integer;
    printf("整数部は%dで小数部は%01fです。\n",Integer,Decimal);
}
