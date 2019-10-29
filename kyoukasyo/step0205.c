#include <stdio.h>
int main(void){
    int a,b;
    printf("２つの整数を入力してください\n");
    printf("整数a:");
    scanf("%d",&a);
    printf("整数b:");
    scanf("%d",&b);
    printf("aの値はbの%f%%です",(double)a/b*100);
}
