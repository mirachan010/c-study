#include <stdio.h>
int main(void){
    double normal;
    int i,min,max,sep;
    printf("‰½cm‚©‚ç:");
    scanf("%d", &min);
    printf("‰½cm‚Ü‚Å:");
    scanf("%d", &max);
    printf("‰½cm‚²‚Æ:");
    scanf("%d", &sep);
    for (i = min; i <= max; i+=sep){
        normal=(i-100)*0.9;
        printf("%dcm:%.2fkg\n",i,normal);
    }
}
