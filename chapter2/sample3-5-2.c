#include <stdio.h>

int main(void){
    char ch;
    
    do{
        printf("�Z���^���j���[\n");
        printf("1.�Z������͂���\n");
        printf("2.�Z�����폜����\n");
        printf("3.���X�g����������\n");
        printf("4.���X�g���������\n");
        printf("5.�I������\n");

        ch = getchar();
    }while((ch !='1') &&(ch !='2') &&(ch !='3') &&(ch !='4') &&(ch !='5'));

    printf("%c�����͂���܂���",ch);
    return 0;
}
