#include <stdio.h>

void func1(void); /* fucn1�̃v���g�^�C�v */

int main(void){
    printf("����");
    func1();
    printf("�D���ł�");
    return 0;
}

void func1(void){
    printf("C��");
}
