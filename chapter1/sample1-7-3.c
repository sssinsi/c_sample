#include <stdio.h>
/*
void func1(void);
void func2(void);
*/
int main(void){
    func2();
    printf("���̐�");
}

void func2(void){
    func1();
    printf("�͂��̂ǂ��� ");
}

void func1(void){
    printf("�đ��� ");
}
