#include <stdio.h>
int main(void){
    double a;
    printf("身長を入力してください");
    scanf("%lf",&a);
    printf("あなたの平均体重は%fです",(a-100)*0.9);
}
