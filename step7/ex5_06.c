#include <stdio.h>
int main(void){
    int i;
    int a[7] = {1, 2, 3, 4, 5, 6, 7};
    int b[7] = {0};
    printf("  a   b  (before)\n");
    printf("-----------------\n");
    for (int i = 0; i <7 ; i++) {
        printf("%4d %4d\n",a[i],b[i]);
    }
    for (int i = 0; i < 7; i++) {
        b[i]=a[i];
    }
    printf("  a   b  (after)\n");
    printf("----------------\n");
    for (int i = 0; i <7 ; i++) {
        printf("%4d %4d\n",a[i],b[i]);
    }
}
