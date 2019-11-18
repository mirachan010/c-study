#include <stdio.h>
int main(void){
    int number,i=1,c=0;
    printf("n‚Ì’lF");
    scanf("%d", &number);
    if(number>0){
        printf("1 ");
        while (number>=i*2) {
            i=i*2;
            printf("%d ",i);
        }
    }else {printf("1");}
}
