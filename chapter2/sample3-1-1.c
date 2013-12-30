#include <stdio.h>

int main(void){
    int i;
    char ch, min;
    
    min = 'z';

    printf("10個のアルファベットを入力してください\n");
    for(i = 1 ; i <= 10 ; i++){
        printf("\n%d個目：",i);
        ch = getchar();
        printf("入力値：%c",ch);
        if(ch < min){
            printf("%c",ch);
            min = ch;
        }
    }

    printf("最小のアルファベットは %c です。",min);

    return 0;
}
