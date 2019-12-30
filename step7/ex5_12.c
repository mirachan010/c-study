#include <stdio.h>
int main(void)
{
 int i, j;
 /* 3回分のデータ */
 int score1[5] = {50, 60, 70, 80, 90};
 int score2[5] = {33, 48, 70, 29, 80};
 int score3[5] = {80, 69, 73, 59, 95};
 /* 3回分，5人用のデータ */
 int score[3][5];
 int sum = 0;
 double ave = 0.0;

 /* 1回目,5人分の点数についての処理ループ */
 for (j=0; j<5; j++) {
 score[0][j] = score1[j];
 }
 /* 2回目,5人分の点数についての処理ループ */
 for (j=0; j<5; j++) {
 score[1][j] = score2[j];
 }

 /* 3回目,5人分の点数についての処理ループ */
 for (j=0; j<5; j++) {
 score[2][j] = score3[j];
 }
 /* 合計値を出す */
 /* 3回分についての処理ループ */
 for (i=0; i<3; i++) {
 /* 5人の点数についての処理ループ */
 for (j=0; j<5; j++) {
 sum += score[i][j];
 }
 }
 /* 平均値を出す */
 ave = (double)sum / 15;
 printf("total average = %.2f\n", ave);
 return 0;
}
