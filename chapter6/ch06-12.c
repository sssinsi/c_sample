#include <stdio.h>
#include <string.h>

int main(void){
    char str1[] = "Pointers are fun to use.";
    char str2[80] , *p1, *p2;

    /*pが文字列１の末尾を返すようにする*/
    p1 = str1 + strlen(str1) - 1;
    //printf("%s",p1);

    p2 = str2;
    //printf("%s",p2);
    /*while(p1 >= str1)
        *p++ = *p1--;
    */
    while(p1 >= str1){
        *p1 = *p2;
        p1--;
        p2++;
    }
    /*文字列はヌルで終わる*/
    *p2 = '\0';
    printf("%s %s",str1,str2);

    return 0;
}

