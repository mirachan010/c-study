#include <stdio.h>
int sumup(int max) {
  int sum=0;
  for (int i = 0; i < max; i++) {
    sum += i + 1;
  }
  return sum;
}
int main(void) {
  int n, sum;
  printf("Input max number");
  scanf("%d", &n);
  sum = sumup(n);
  printf("sum is %d", sum);
  return 0;
}
