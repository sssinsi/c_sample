#include <stdio.h>

int main(void){
    int count,i;
    int l;
    int v;
    printf("計算回数を入力してください：");
    scanf("%d",&count);

    for(i=1 ;i <= count ; i++){
        printf("\n%d回目の計算\n",i);
        printf("距離：");
        scanf("%d",&l);
        printf("速度：");
        scanf("%d",&v);

        printf("所要時間は：%f",(1.0 *l / v));
    }

    return 0;
}
