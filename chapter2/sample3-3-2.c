#include <stdio.h>

int main(void){
    int count;

    printf("適当な時間を入力：");
    scanf("%d",&count);

    for(;count;--count)
        ;
    printf("\a");
    printf("終了");
    return 0;
}
