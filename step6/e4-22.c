//�����̒����`
#include <stdio.h>
int main(void){
    int a,b,big,small;
    printf("�����`�̒����̈�ӂ������:\n");
    scanf("%d",&a);
    printf("�����`�̒����̂����Е��̕ӂ������:\n");
    scanf("%d",&b);
    big=a>b?a:b;
    small=a>b?b:a;
    for (int i = 0; i < small; i++) {
        for (int j = 0; j < big; j++) {
            printf("*");
        }
        printf("\n");
    }
}
