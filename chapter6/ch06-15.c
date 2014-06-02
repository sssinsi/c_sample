#include <stdio.h>
#include <string.h>

int main(void){
    char *p = "stop";
    char str[80];

    do {
        printf("文字列を入力してください：");
        gets(str);
    } while(strcmp(p, str));

    return 0;
}
