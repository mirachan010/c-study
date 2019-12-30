#include <stdio.h>
int main(void){
    int p[5];
    int sum = 0;
    double average = 0.0;
    for (int i = 0; i < 5; i++) {
        printf("Input %d's score:",i+1);scanf("%d",&p[i]);
        sum += p[i];
    }

    average=(double)sum/5.0;
    printf("total =%d\n",sum);
    printf("average =%.2f\n",average);
    return 0;
}
