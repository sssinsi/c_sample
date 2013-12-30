#include <stdio.h>

int main(void){
    int count,l,v;

    printf("回数を入力してください:");
    scanf("%d",&count);

    while(count){
        printf("距離：");
        scanf("%d",&l);
        printf("速度：");
        scanf("%d",&v);

        printf("所要時間：%f\n", (1.0 * l / v));

        count--;
    }
    return 0;

}
