#include <stdio.h>

int main(void){
    char ch;

    printf("�Í������ꂽ���b�Z�[�W����͂��Ă��������F");

    ch=getchar();
    while(ch != '\n'){
        printf("%c",ch-1);
        ch=getchar();
    }

    return 0;
}
