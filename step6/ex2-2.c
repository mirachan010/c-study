#include <stdio.h>
int main(void){
    int num;
    for (int i = 1; i < 100; i++) {
        num=i;
        printf("%d",num);
        do {
            if (num%2==0) {
                num=num/2;
            }else {
                num=num*3+1;
            }
            printf("¨%d",num);
        } while (num!=1);
        printf("\n");
    }
}
