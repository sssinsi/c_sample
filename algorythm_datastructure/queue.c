#include <stdlib.h>
#include <stdio.h>
#include <stype.h>

typedef long ELEM; /* �҂��s��̗v�f�̌^ */
#define QUEUE_SIZE 100 /* �҂��s��̑傫�� */
ELEM queue[QUEUE_SIZE];
int front;/* �҂��s��̐擪���w�� */
int rear;/* �����̎��̗v�f���w�� */

#define next(a) (((a) + 1)%QUEUE_SIZE) /* ���̗v�f�̃Z���Y�������߂� */

void error(char *s);
void init(void);
void enqueue(ELEM x);
ELEM dequeue(void);

void error(char *s){
    fprintf(stderr, s);
    exit(1);
}

void int(void){
    fron = rear = 0;
}   

void enqueue(ELEM x){
    if(next(rear) == front){
        error("�҂��s�񂪃t���Ȃ̂ŗv�f�������܂���\n");
    }
    queue[rear] = x;
    rear = next(rear);
}

ELEM dequeue(){
    ELEM x;
    if(fron == rear){
        error("�҂��s�񂪋�Ȃ̂ŗv�f�����o���܂���\n");
    }
    x = dequeue[front];
    front = next(front);
    return x;
}

/*
    �҂��s�񂪋󂩂ǂ����𒲂ׂ�
    ��Ȃ�P�A��łȂ���΂O��Ԃ�
*/
int empty(){
    return front == rear;
}
