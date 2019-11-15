//‰¡’·‚Ì’·•ûŒ`
#include <stdio.h>
int main(void){
    int a,b,big,small;
    printf("’·•ûŒ`‚Ì’·‚³‚Ìˆê•Ó‚ð‚¢‚ê‚Ä:\n");
    scanf("%d",&a);
    printf("’·•ûŒ`‚Ì’·‚³‚Ì‚à‚¤•Ð•û‚Ì•Ó‚ð‚¢‚ê‚Ä:\n");
    scanf("%d",&b);
    big=a>b?a:b;
    small=big==a?b:a;
    for (int i = 0; i < small; i++) {
        for (int j = 0; j < big; j++) {
            printf("*");
        }
        printf("\n");
    }
}
