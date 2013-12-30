#include <stdio.h>

int main(void){
    char ch;

    printf("暗号化されたメッセージを入力してください：");

    ch=getchar();
    while(ch != '\n'){
        printf("%c",ch-1);
        ch=getchar();
    }

    return 0;
}
