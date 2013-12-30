#include <stdio.h>

int main(void){
    char ch;
    
    do{
        printf("住所録メニュー\n");
        printf("1.住所を入力する\n");
        printf("2.住所を削除する\n");
        printf("3.リストを検索する\n");
        printf("4.リストを印刷する\n");
        printf("5.終了する\n");

        ch = getchar();
    }while((ch !='1') &&(ch !='2') &&(ch !='3') &&(ch !='4') &&(ch !='5'));

    printf("%cが入力されました",ch);
    return 0;
}
