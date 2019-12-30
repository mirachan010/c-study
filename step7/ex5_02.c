#include <stdio.h>
int main(void){
    int p[5];
    int sum = 0;
    double average = 0.0;

    printf("Input 1's score:");scanf("%d",&p[0]);
    printf("Input 2's score:");scanf("%d",&p[1]);
    printf("Input 3's score:");scanf("%d",&p[2]);
    printf("Input 4's score:");scanf("%d",&p[3]);
    printf("Input 5's score:");scanf("%d",&p[4]);

    sum = p[0]+p[1]+p[2]+p[3]+p[4];
    average=(double)sum/5.0;
    printf("total =%d\n",sum);
    printf("average =%.2f\n",average);
    return 0;
}
