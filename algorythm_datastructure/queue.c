#include <stdlib.h>
#include <stdio.h>
#include <stype.h>

typedef long ELEM; /* 待ち行列の要素の型 */
#define QUEUE_SIZE 100 /* 待ち行列の大きさ */
ELEM queue[QUEUE_SIZE];
int front;/* 待ち行列の先頭を指す */
int rear;/* 末尾の次の要素を指す */

#define next(a) (((a) + 1)%QUEUE_SIZE) /* 次の要素のセ￥添字を求める */

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
        error("待ち行列がフルなので要素を入れられません\n");
    }
    queue[rear] = x;
    rear = next(rear);
}

ELEM dequeue(){
    ELEM x;
    if(fron == rear){
        error("待ち行列が空なので要素を取り出せません\n");
    }
    x = dequeue[front];
    front = next(front);
    return x;
}

/*
    待ち行列が空かどうかを調べる
    空なら１、空でなければ０を返す
*/
int empty(){
    return front == rear;
}
