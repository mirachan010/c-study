#include <stdio.h>
int main(void)
{
 int i, j;
 /* 3�񕪂̃f�[�^ */
 int score1[5] = {50, 60, 70, 80, 90};
 int score2[5] = {33, 48, 70, 29, 80};
 int score3[5] = {80, 69, 73, 59, 95};
 /* 3�񕪁C5�l�p�̃f�[�^ */
 int score[3][5];
 int sum = 0;
 double ave = 0.0;

 /* 1���,5�l���̓_���ɂ��Ă̏������[�v */
 for (j=0; j<5; j++) {
 score[0][j] = score1[j];
 }
 /* 2���,5�l���̓_���ɂ��Ă̏������[�v */
 for (j=0; j<5; j++) {
 score[1][j] = score2[j];
 }

 /* 3���,5�l���̓_���ɂ��Ă̏������[�v */
 for (j=0; j<5; j++) {
 score[2][j] = score3[j];
 }
 /* ���v�l���o�� */
 /* 3�񕪂ɂ��Ă̏������[�v */
 for (i=0; i<3; i++) {
 /* 5�l�̓_���ɂ��Ă̏������[�v */
 for (j=0; j<5; j++) {
 sum += score[i][j];
 }
 }
 /* ���ϒl���o�� */
 ave = (double)sum / 15;
 printf("total average = %.2f\n", ave);
 return 0;
}
