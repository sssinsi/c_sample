#include <stdio.h>

void func1(void);

int main(void){
    func1();

    return 0;
}

void func1(void){
    printf("‚±‚ê‚Í•\Ž¦‚³‚ê‚é");
    return;/* ’l‚ð”º‚í‚¸–ß‚é */
    printf("‚±‚ê‚Í•\Ž¦‚³‚ê‚È‚¢");
}
