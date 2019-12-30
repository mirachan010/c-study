#include <stdio.h>
#include <math.h>
void hello(void){
    printf("Ç±ÇÒÇ…ÇøÇÕ\n");
}

void nhello(int n){
    for (int i=0; i<n; i++) {
        printf("Ç±ÇÒÇ…ÇøÇÕ\n");
    }
}

int area(int side,int vertical){
    return side*vertical;
}

double helon(int a,int b,int c){
    double s,T;
    s=(double)(a+b+c)/2;
    T=sqrt(s*(s-a)*(s-b)*(s-c));
    return T;
}

int main(void){
    int a,b,c,d,e,n,size;
    double T;
    hello();
    printf("input n\n>>");
    scanf("%d",&n);
    nhello(n);
    printf("No.1:");
    scanf("%d",&a);
    printf("No.2:");
    scanf("%d",&b);
    size=area(a,b);
    printf("ñ êœÇÕ%d\n",size);
    printf("No.1:");
    scanf("%d",&c);
    printf("No.2:");
    scanf("%d",&d);
    printf("No.3:");
    scanf("%d",&e);
    T=helon(c,d,e);
    printf("%f\n",T);
}
