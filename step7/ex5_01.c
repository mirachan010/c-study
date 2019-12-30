#include <stdio.h>
int main(void){
    int a,b,c,d,e;
    int sum = 0;
    double average = 0.0;

    printf("Input A's score:");scanf("%d",&a);
    printf("Input B's score:");scanf("%d",&b);
    printf("Input C's score:");scanf("%d",&c);
    printf("Input D's score:");scanf("%d",&d);
    printf("Input E's score:");scanf("%d",&e);

    sum = a+b+c+d+e;
    average=(double)sum/5.0;
    printf("total =%d\n",sum);
    printf("average =%.2f\n",average);
    return 0;
}
