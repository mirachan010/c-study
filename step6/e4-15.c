#include <stdio.h>
int main(void){
    double normal;
    int i,min,max,sep;
    printf("何cmから:");
    scanf("%d", &min);
    printf("何cmまで:");
    scanf("%d", &max);
    printf("何cmごと:");
    scanf("%d", &sep);
    for (i = min; i <= max; i+=sep){
        normal=(i-100)*0.9;
        printf("%dcm:%.2fkg\n",i,normal);
    }
}
