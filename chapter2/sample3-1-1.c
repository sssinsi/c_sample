#include <stdio.h>

int main(void){
    int i;
    char ch, min;
    
    min = 'z';

    printf("10�̃A���t�@�x�b�g����͂��Ă�������\n");
    for(i = 1 ; i <= 10 ; i++){
        printf("\n%d�ځF",i);
        ch = getchar();
        printf("���͒l�F%c",ch);
        if(ch < min){
            printf("%c",ch);
            min = ch;
        }
    }

    printf("�ŏ��̃A���t�@�x�b�g�� %c �ł��B",min);

    return 0;
}
