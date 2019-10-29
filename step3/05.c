#include <stdio.h>
int main(void){
    double get;
    printf("小数以下がある実数を入力してください\n>>");
    scanf("%lf", &get);
    printf("%.0f\n",get+0.5);
    return 0;
}
