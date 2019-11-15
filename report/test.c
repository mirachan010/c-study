#include <stdio.h>
int main(void){
    int one,two;
    printf("1‚Â‚ß:");
    scanf("%d", &one);
    printf("2‚Â‚ß:");
    scanf("%d", &two);
    printf("%d",one);
    char a=one>two?'>':one==two?'=':'<';
    printf(" %c %d",a,two);
}
