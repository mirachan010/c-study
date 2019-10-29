#include <stdio.h>
int main(void){
    int money;
    int people;
    printf("金額はいくらですか？:");
    scanf("%d", &money);
    printf("人数は何人ですか？:");
    scanf("%d", &people);
    printf("一人あたり%d円と端数%d円\n",money/people,money%people);
}
