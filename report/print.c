#include <stdio.h>
int main(void){
    int one,two;
    printf("1つめ：");
    scanf("%d", &one);
    printf("2つめ：");
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
