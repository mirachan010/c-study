#include <stdio.h>
int main(void){
    double test[5]={0.5,1.6,2.7,3.8,4.9};
    double average=0.0,sum=0.0;
    for (int i = 0; i < 5; i++) {
        sum+=test[i];
    }
    average=sum/5.0;
    printf("total   =%f\n",sum);
    printf("average =%f\n",average);
    return 0;
}
