#include <stdio.h>
int main(void){
    int a[5] = {0};
    printf("%d\n",a[3]);
    int *p, *q;
    
    p=a;
    printf("%d\n",p);
    for (int i = 0; i < 5; i++) {
        *(p+i) = i;
    }
    printf("%d\n",a[3]);
    printf("%d\n",*p);
    q = p;
    printf("%d\n",q[0]);
    for (int i = 0; i < 5; i++) {
        q[i] = a[i] * 2 + 1;
    }
    printf("%d %d\n", a[1], a[2]);
    return 0;
}
