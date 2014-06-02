#include <stdio.h>

int main(void){
    char *p, **mp, str[80];

    p = str;
    mp = &p;

    printf("名前を入力してください：");
    gets(*mp);
    printf("こんにちは %s さん", *mp);

    return 0;
}
