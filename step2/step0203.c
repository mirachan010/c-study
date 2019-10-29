#include <stdio.h>
int main(void){
    int a;
    int b;
    int c;

    a = 50;
    printf("変数aの値は%dです\n",a);
    printf("変数bの値をキーボードで入力してください");
    scanf("%d",&b);
    printf("%dが変数bに代入されました\n",b);

    c = a * b;
    printf("%dかける%dは%d\n",a,b,c);
}
