#include <stdio.h>
int main(void){
    int p[100];
    int i; int n;
    int sum = 0; double ave = 0.0; int max = 0; int min =100;
    printf("input number of students: ");scanf("%d",&n);
    if ( (n <= 0) || (n > 100) ) {
        printf("error!\n");
        return 1;
    }
    for (int i = 0; i < n ; i++) {
        printf("Input %d's score:\n",i+1);scanf("%d",&p[i]);
        sum+=p[i];
        if (p[i] > max) {
            max = p[i];
        }
        if (p[i] < min) {
            min = p[i];
        }
    }
    ave = (double)sum/n;
    printf("summation = %d, average = %.2f\n", sum, ave);
    printf("max = %d, min = %d\n", max ,min);
    return 0;
}
