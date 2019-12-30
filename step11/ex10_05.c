#include <stdio.h>
double avg3(int a,int b,int c){return (double)(a+b+c)/3;}
int main(void){
    int a,b,c;
    double avg;
    printf("No.1:");
    scanf("%d",&a);
    printf("No.2:");
    scanf("%d",&b);
    printf("No.3:");
    scanf("%d",&c);
    avg=avg3(a,b,c);
    printf("ŽO‚Â‚Ì•½‹Ï’l‚Í%f‚Å‚·",avg);
}
