#include <stdio.h>
int main(void){
    double Vertical;
    double Side;
    printf("縦の長さを教えてね(cm)\n");
    scanf("%lf",&Vertical);
    printf("横の長さを教えてね(cm)\n");
    scanf("%lf",&Side);
    printf("この縦%fcm横%fcmの長方形の面積は%lfです",Vertical,Side,Vertical*Side);
}
