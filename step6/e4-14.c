#include <stdio.h>
int main(void){
    int i,number=0;
    printf("���������\n");
    scanf("%d", &number);
    for (i = 1; i <= number ; i++) {
        printf("%d",i%10);
    }
    printf("\n");
}
