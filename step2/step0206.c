#include <stdio.h>
int main(void){
    int i;
    double d;

    printf("整数を一つ入力してください\n>>");
    scanf("%d", &i);
    printf("実数を一つ入力してください\n>>");
    scanf("%lf", &d);
    
    printf("iの値は%dです\n", i);
    printf("dの値は%fです\n", d);
}
