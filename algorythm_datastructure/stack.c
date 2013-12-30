#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

typedef long ELEM; /* �X�^�b�N�̗v�f�̌^ */

#define STACK_SIZE 100 /* �X�^�b�N�̑傫�� */

ELEM stack[STACK_SIZE]; /* �X�^�b�N�̒�` */

int n; /* �X�^�b�N�|�C���^ */

/* �G���[���b�Z�[�W���v�����g����exit���� */
void error(char *s){
    fprintf(stderr, s);
    exit(1);
}

/* �X�^�b�N�̏����� */
void init(){
    n = 0;
}

/* �X�^�b�N�Ƀf�[�^��ς� */
void push(ELEM x){
    if(n >= STACK_SIZE){
        error("stack overflow\n");
    }
    stack[n++] = x;
}

/* �X�^�b�N����f�[�^���~�낷 */
ELEM pop(void){
    if(n <= 0){
        error("stack overflow\n");   
    }
    return stack[--n];
}

/* 
  �X�^�b�N���󂩂ǂ������ׂ�
  ��Ȃ�1,��łȂ����0��Ԃ�  
*/

int empty(void){
    return n == 0;
}

/******************************************************/
/* �t�|�[�����h�d��v���O���� */

int main(void){
    int c;
    long x, a, b;
    init();
    while((c = getchar()) != EOF){
        if(isdigit(c)){
            ungetc(c, stdin);
            scanf("%ld", &x);
            push(x);
        }else{
            switch (c){
                case '+':
                    b = pop();
                    a = pop();
                    push(a + b);
                    break;
                case '-':
                    b = pop();
                    a = pop();
                    push(a - b);
                    break;
                case '*':
                    b = pop();
                    a = pop();
                    push(a * b);
                    break;
                case '/':
                    b = pop();
                    a = pop();
                    push(a / b);
                    break;
                case '\n':
                    if(! empty()){
                        printf("������%ld�ł�\n", pop());
                    }
                    init();
                    break;
                case ' ':
                case '\t':
                    /* �������Ȃ��œǂݔ�΂� */
                    break;
                default:
                    printf("�s���ȕ���������܂���\n");
                    printf("���͂��Ȃ����Ă��������B\n");
                    while((c = getchar()) != EOF && c != '\n')
                        ;
                    break;
            }
        }
    }
    return 0;
}
