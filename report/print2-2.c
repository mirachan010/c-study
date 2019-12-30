#include <stdio.h>
int main(void){
    int i;
    int c[] = {1, 2, 3, 5, 8, 13, 21, 34};
    int d[8];
    for (int i = 0; i < 8; i++) {
        d[i] = c[7-i];
    }
    return 0;
}
