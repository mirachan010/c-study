#include <stdio.h>
double sample(int r){
  double d;
  d = r * r * 3.14;
  return d;
}
void main(void){
    int r;
    double s;
    printf("�~�̔��a");
    scanf("%d", &r);
    s = sample(r);
    printf("���a%d�̉~�̖ʐς�%f�ł���\n", r, s);
}
