#include <stdio.h>

int main(void){
    char ch;

    printf("1文字を入力してください：");
    ch = getchar();
    printf("\nこのASCIIコードは %d です",ch);
    return 0;
}
