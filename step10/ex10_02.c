#include <stdio.h>
int main(void){
    int i;
    int a[3];
    double x[3] = {1.414, 2.718, 3.141};
    for (i = 0; i < 3; i++) {
        printf("a[%d]: %d bytes, address = %d\n", i, sizeof(a[i]), (int)(&a[i]));
    }
    for (i = 0; i < 3; i++) {
        printf("x[%d]: %d bytes, address = %d\n", i, sizeof(x[i]), (int)(&x[i]));
    }
    return 0;
}
