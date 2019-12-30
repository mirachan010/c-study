#include <stdio.h>
int main(void){
    int a[5] = {1, 2, 3, 4, 5};
    printf("%d\n", a);
    printf("%d\n", *(a+2));
    int *p = a;
    printf("%d\n", p+1);
    printf("%d\n", p+3);
    return 0;
}
