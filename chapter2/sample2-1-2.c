#include <stdio.h>

int main(void){
    int num;

    printf("数字を入力してください:");
    scanf("%d",&num);
    if(num % 2 ){
        printf("奇数です");
    }else{
        printf("偶数です");
    }
    return 0;
}
