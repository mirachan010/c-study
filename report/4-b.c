#include <stdio.h>
int main(void){
    int number;
    printf("n�̒l�F");
    scanf("%d", &number);
    for (int i = 0; i < number; i++) {
        printf("%d ",(i+1)*3);
    }
}
