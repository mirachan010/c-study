#include <stdio.h>
int main(void){
    int a, b, c; 
    printf("Input 3 number with space.\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d %d",a>b&&a>c?a:b>c?b:c,((a>b&&a>c?a:b>c?b:c)==a?b>c?b:c:(a>b&&a>c?a:b>c?b:c)==b?a>c?a:c:a>b?a:b),((a>b&&a>c?a:b>c?b:c)==a||((a>b&&a>c?a:b>c?b:c)==a?b>c?b:c:(a>b&&a>c?a:b>c?b:c)==b?a>c?a:c:a>b?a:b)==a?(a>b&&a>c?a:b>c?b:c)==b||((a>b&&a>c?a:b>c?b:c)==a?b>c?b:c:(a>b&&a>c?a:b>c?b:c)==b?a>c?a:c:a>b?a:b)==b?c:b:a));
}
