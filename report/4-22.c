//横長の長方形
#include <stdio.h>
int main(void){
    int a,b,big,small;
    printf("長方形の長さの一辺をいれて:\n");
    scanf("%d",&a);
    printf("長方形の長さのもう片方の辺をいれて:\n");
    scanf("%d",&b);
    big=a>b?a:b;
    small=big==a?b:a;
    for (int i = 0; i < small; i++) {
        for (int j = 0; j < big; j++) {
            printf("*");
        }
        printf("\n");
    }
}
