/* ３つの関数を持つプログラム */

#include <stdio.h>

void func1(void);/*func1のプロトタイプ*/
void func2(void);/*func2のプロトタイプ*/

int main(void){
  func2();
  printf("3");
  return 0;
}

void func2(void){
    func1();
    printf("2 ");
}

void func1(void){
    printf("1 ");
}
