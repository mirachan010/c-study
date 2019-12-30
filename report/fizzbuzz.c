#include <stdio.h>
int main(void){
    int count=1;
    for ( count=1 ; count <= 100; count++) {
        if (count%15==0) {
            printf("FizzBuzz\n");
        }else if(count%3==0){
            printf("Fizz\n");
        }else if(count%5==0){
            printf("Buzz\n");
        }else{
            printf("%d\n",count);
        }
    }
    return 0;
}
