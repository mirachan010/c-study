#include <stdio.h>
int main(void){
    int score[3][5]={
                        { 50, 60, 70, 80, 90},
                        { 33, 48, 70, 29, 80},
                        { 80, 69, 73, 59, 95}
                    },

    min=100,max=0,sum3[5]={0},sum5[3]={0};

    double ave5[3],ave3[5];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            sum5[i]+=score[i][j];
            max=max>score[i][j]?max:score[i][j];
            min=min<score[i][j]?min:score[i][j];
        }
        ave5[i]=(double)sum5[i]/5;
        printf("average of traial(%d) = %.2f\n",i+1,ave5[i]);
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            sum3[i]=sum3[i]+score[j][i];
        }
        ave3[i]=(double)sum3[i]/3;
        printf("average of student(%d) = %.2f\n",i+1,ave3[i]);
    }
    
    printf("total max score = %d\n",max);
    printf("total min score = %d",min);

}
