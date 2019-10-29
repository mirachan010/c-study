#include <stdio.h>
int main(void){
    int a,b,c,x,d,n;
    scanf("%d %d %d",&a,&b,&c);
    x=a>b&&a>c?a:b>c?b:c;
    d=x==a?b>c?b:c:x==b?a>c?a:c:a>b?a:b;
    n=x==a?d==b?c:b:x==b?d==a?c:a:d==a?b:a;
    n=x==a||d==a?x==b||d==b?c:b:a;
    printf("%d %d %d",x,d,n);
}
