#include <stdio.h>
int min3(int a,int b,int c){
    int min;
    min=a;
    min=min>b?b:min;
    min=min>c?c:min;
    return min;
}
int main(void){
    int a,b,c,min;
    printf("No.1:");
    scanf("%d",&a);
    printf("No.2:");
    scanf("%d",&b);
    printf("No.3:");
    scanf("%d",&c);
    min = min3(a, b, c);
    printf("min number is %d\n", min);
    return 0;
}
