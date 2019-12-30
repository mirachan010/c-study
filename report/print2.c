#include <stdio.h>
int main(void){
    int i = 0;
    int a[] = {0, 0, 0, 0, 0};
    int sum = 0;
    double ave = 0.0;
    for (i = 0; i < 5 ; i++) {
        printf("input number:");
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    ave = (double)sum / 5;
    printf("summation = %d, average = %.2f\n", sum, ave);
    return 0;
}
