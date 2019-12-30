#include <stdio.h>
int main(void){
    char s[34] = "Yes, we can !";
    char t[34];
    for (int i = 0; i < 34; i++) {
        t[i]=s[i];
    }
    printf("%s\n",t);
    return 0;
}
