/* �R�̊֐������v���O���� */

#include <stdio.h>

void func1(void);/*func1�̃v���g�^�C�v*/
void func2(void);/*func2�̃v���g�^�C�v*/

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
