#include <stdio.h>
int main(void){
    int one,two,three;
    double sum,ave;
    printf("整数を3つ入力してください\n");
    printf("1つめを入力してください\n>>");
    scanf("%d", &one);
    printf("2つめを入力してください\n>>");
    scanf("%d", &two);
    printf("3つめを入力してください\n>>");
    scanf("%d", &three);
    sum=one+two+three;
    ave=sum/3;
    printf("合計%.0f平均%f\n",sum,ave);
    return 0;
}
