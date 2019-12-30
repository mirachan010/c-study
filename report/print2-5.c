#include <stdio.h>
#define NUMBER1 3+4
#define NUMBER2 (3+4)

int main(void){
    int a = NUMBER1 * 5;
    int b = NUMBER2 * 5;
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}
