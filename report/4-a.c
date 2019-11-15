#include <stdio.h>
int main(void){
    int number;
    printf("n‚Ì’lF");
    scanf("%d", &number);
    for (int i = 0; i < number; i++) {
        if (i%3==0) {
            printf("%d ",i);
        }
    }
}
