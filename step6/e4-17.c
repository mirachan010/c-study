#include <stdio.h>
int main(void){
    int number;
    printf("n�̒l�F");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++) {
        printf("%d�̂Q���%d\n",i,i*i);
    }
}
