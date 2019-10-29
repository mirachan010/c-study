#include <stdio.h>
int main(void){
    int dollar;
    double rate;
    printf("両替金額(ドル):");
    scanf("%d", &dollar);
    printf("レート(ドル→円):");
    scanf("%lf", &rate);
    double yen = dollar*rate;
    printf("現在%dドルは%.0f円です。\n",dollar,yen);
}
