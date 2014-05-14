#include <stdio.h>
#include <string.h>

char *p[] = {
"はい",
"いいえ",
"わかりません。別の言い方で質問してください。"
};

int main(void){
    int i, index;
    char input[80];

    gets(input);
    index = strlen(input) % 3;
    printf("%s",p[index]);
    
    return 0;
}
