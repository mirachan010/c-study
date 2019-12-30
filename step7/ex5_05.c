#include <stdio.h>
#define NUMBER 1000
int main(void){
    int n,sum=0;
    double average=0.0;
    int box[NUMBER];
    printf("‰½ŒÂ‚Ì”š‚ğ—pˆÓ‚·‚é?");
    scanf("%d", &n);
    if ((n<=0)||(n>NUMBER)){printf("error!\n");return 1;}
    for (int i = 0; i < n; i++) {
    printf("%dŒÂ–Ú‚Ì”š:",i+1);
        scanf("%d",&box[i]);
        sum+=box[i];
    }
    average=(double)sum/n;
    printf("toutal  =%d\n",sum);
    printf("average =%.2f\n",average);
}
