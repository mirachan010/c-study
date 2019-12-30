#include <stdio.h>
int main(void){
    char s[16] = "HELLO, WORLD !!";
    putchar(s[0]);
    putchar(s[8]);
    putchar(s[3]);
    char *p = s;
    putchar(p[11]);
    putchar(p[13]);
    return 0;
}
