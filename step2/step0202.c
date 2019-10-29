#include <stdio.h>
int main(void){
    int a = 1;
    int b;
    printf("最初、aの値は%dです\n",a);
    a = 2;
    printf("aの値は更新されて%dです\n",a);
    a = a+1;
    printf("aの値は1足されて%dです\n",a);
    b = a;
    printf("bの値はaの値が代入されて%dです\n",b);
    return 0;
}
