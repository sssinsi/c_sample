#include <stdio.h>

int main(void){
    int num1,num2,select;

    printf("��P�̐�������͂��Ă��������F");
    scanf("%d",&num1);
    printf("��Q�̐�������͂��Ă��������F");
    scanf("%d",&num2);
    printf("�v�Z��I�����Ă�������(0:�a�A0�ȊO:��)�F");
    scanf("%d",&select);

    if(select == 0){
        printf("�a�F%d",num1 + num2);
    }else{
        printf("�ρF%d",num2 * num2);
    }
    return 0;
}
