#include<stdio.h>
int main(void){
    int i, max;
    printf("���������\n");
    scanf("%d", &max);
    for (i = 0; i <= max; i++) {
        if (i%2) {
            printf("%d ",i);
        }
    }
}
