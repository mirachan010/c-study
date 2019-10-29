#include <stdio.h>
int main(void){
<<<<<<< HEAD
    printf("Input 3 number with space.\n");
    int a,b,c;
=======
    int a, b, c; 
    printf("Input 3 number with space.\n");
>>>>>>> c922c21... 読みやすく書き換えてみた
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d %d",a>b&&a>c?a:b>c?b:c,((a>b&&a>c?a:b>c?b:c)==a?b>c?b:c:(a>b&&a>c?a:b>c?b:c)==b?a>c?a:c:a>b?a:b),((a>b&&a>c?a:b>c?b:c)==a||((a>b&&a>c?a:b>c?b:c)==a?b>c?b:c:(a>b&&a>c?a:b>c?b:c)==b?a>c?a:c:a>b?a:b)==a?(a>b&&a>c?a:b>c?b:c)==b||((a>b&&a>c?a:b>c?b:c)==a?b>c?b:c:(a>b&&a>c?a:b>c?b:c)==b?a>c?a:c:a>b?a:b)==b?c:b:a));
}
