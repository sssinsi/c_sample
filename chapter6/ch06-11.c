#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char str[80],*p;

    printf("文字列を入力してください：");
    gets(str);
    p = str;

    //while(*p){
    //    *p = toupper(*p);
    //    p++;
    //}
    while(*p)
        *p++ = toupper(*p);

    printf("%s\n",str);

    p = str;

    //while(*p){
    //    *p = tolower(*p);
    //    p++;
    //}
    while(*p)
        *p++ =tolower(*p);

    printf("%s\n",str);

    return 0;

}
