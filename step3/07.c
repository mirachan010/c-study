#include <stdio.h>
int main(void){
    int number,one,two,thr,fou,fiv,six,sev,sum,check;
    printf("学籍番号を入力してね\n>>");
    scanf("%d", &number);
    one=number/1000000;
    two=number/100000-one*10;
    thr=number%100000/10000;
    fou=number%10000/1000;
    fiv=number%1000/100;
    six=number%100/10;
    sev=number%10;
    sum=one+two+thr+fou+fiv+six+sev;
    check=sum-sum/10*10;
    printf("%d\n",check);
    return 0;
}
