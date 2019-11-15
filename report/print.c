#include <stdio.h>
int main(void){
    int one,two;
    printf("1�߁F");
    scanf("%d", &one);
    printf("2�߁F");
    scanf("%d", &two);
    printf("%d",one);
    if (one>two) {
        printf(">");
    }else if (one<two) {
        printf("<");
    }else if (one==two) {
        printf("=");
    }
    printf("%d",two);
}
