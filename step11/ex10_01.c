#include <stdio.h>
double sample(int r){
  double d;
  d = r * r * 3.14;
  return d;
}
void main(void){
    int r;
    double s;
    printf("‰~‚Ì”¼Œa");
    scanf("%d", &r);
    s = sample(r);
    printf("”¼Œa%d‚Ì‰~‚Ì–ÊÏ‚Í%f‚Å‚ ‚é\n", r, s);
}
