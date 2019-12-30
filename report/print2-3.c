#include <stdio.h>
int main(void){
    int i;
    int ev[8], od[8];
    for (i = 0; i < 16; i++) {
        if (i%2) {
            od[i/2]=i;
        }else{
            ev[i/2]=i;
        }
    }
    return 0;
}
