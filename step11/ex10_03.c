#include <stdio.h>
int cube(int a){
    return a*a*a;
}
int main(void){
    int a,b;
    printf("Input number\n>>");
    scanf("%d",&a);
    b=cube(a);
    printf("%d��3���%d",a,b);
    return 0;
}
