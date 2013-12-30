#include <stdio.h>

int main(void){
    int answer,input,i;
    answer=23;
    
    for(i=10;i > 0;i--){
        printf("%d 回目：",i);
        scanf("%d",&input);
        
        if(answer == input){
            printf("当たり！");
            return 0;   
        }

        if(answer < input){
            printf("%dより小さいです。\n",input);
        }else{
            printf("%dより大きいです。\n",input);
        }
    }
    printf("残念でした。正解は%dでした。",answer);
    return 0;
}
