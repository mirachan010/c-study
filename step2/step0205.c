#include <stdio.h>
int main(void){
    int Numerator,Denominator;
    printf("a÷bをするよ\naは何?\n>>");
    scanf("%d",&Numerator);
    printf("bは何?\n>>");
    scanf("%d",&Denominator);
    printf("%d÷%dは%dあまり%dだよ\n",Numerator,Denominator,Numerator/Denominator,Numerator%Denominator);
}
