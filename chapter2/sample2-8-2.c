#include <stdio.h>

int main(void){
    int i, room_count;
    float area,sum;

    printf("部屋数を入力してください：");
    scanf("%d",&room_count);

    if(!room_count){
        printf("部屋数が0のため終了します。");
        return 0;
    }

    for(i = 1; i <= room_count; i++){
       printf("%d部屋目の面積m2を入力してください：", i);
       scanf("%f",&area);
       sum = sum + area;   
    }

    printf("総面積は%f(m2)",sum);

    return 0;
}
