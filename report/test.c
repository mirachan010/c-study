#include <stdio.h>
int main(void){
    int one,two;
    printf("1��:");
    scanf("%d", &one);
    printf("2��:");
    scanf("%d", &two);
    printf("%d",one);
    char a=one>two?'>':one==two?'=':'<';
    printf(" %c %d",a,two);
}
