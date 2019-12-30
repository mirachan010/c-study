#include <stdio.h>
int main(void){
   int i = 0, j = 0;
   int pt[3][5] = {{62,76,84,92,85},{80,70,60,70,80},{90,80,78,88,96}};
   int sum = 0;
   double ave;
   int max = 0, min = 100;

   for ( i = 0; i < 3 ; i++) {
       for (j = 0; j < 5 ; j++) {
           sum += pt[i][j];
           min = min<pt[i][j]?min:pt[i][j];
           max = max>pt[i][j]?max:pt[i][j];
       }
   }
   ave = (double)sum/15;
   printf("summation = %d, average = %.2f\n", sum, ave);
   printf("max = %d, min = %d\n", max, min);
    return 0;
}
