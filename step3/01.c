#include <stdio.h>
int main(void){
    int now;
    int del;
    printf("現在時刻(整数):");
    scanf("%d", &now);
    printf("経過時間(整数):");
    scanf("%d", &del);
    printf("%d時から%d時間後は%d時です\n",now,del,(now+del)%24);
    return 0;
}
