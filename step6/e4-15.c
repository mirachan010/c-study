#include <stdio.h>
int main(void){
    double normal;
    int i,min,max,sep;
    printf("��cm����:");
    scanf("%d", &min);
    printf("��cm�܂�:");
    scanf("%d", &max);
    printf("��cm����:");
    scanf("%d", &sep);
    for (i = min; i <= max; i+=sep){
        normal=(i-100)*0.9;
        printf("%dcm:%.2fkg\n",i,normal);
    }
}
