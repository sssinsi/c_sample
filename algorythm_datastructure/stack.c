#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

typedef long ELEM; /* スタックの要素の型 */

#define STACK_SIZE 100 /* スタックの大きさ */

ELEM stack[STACK_SIZE]; /* スタックの定義 */

int n; /* スタックポインタ */

/* エラーメッセージをプリントしてexitする */
void error(char *s){
    fprintf(stderr, s);
    exit(1);
}

/* スタックの初期化 */
void init(){
    n = 0;
}

/* スタックにデータを積む */
void push(ELEM x){
    if(n >= STACK_SIZE){
        error("stack overflow\n");
    }
    stack[n++] = x;
}

/* スタックからデータを降ろす */
ELEM pop(void){
    if(n <= 0){
        error("stack overflow\n");   
    }
    return stack[--n];
}

/* 
  スタックが空かどうか調べる
  空なら1,空でなければ0を返す  
*/

int empty(void){
    return n == 0;
}

/******************************************************/
/* 逆ポーランド電卓プログラム */

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
                        printf("答えは%ldです\n", pop());
                    }
                    init();
                    break;
                case ' ':
                case '\t':
                    /* 何もしないで読み飛ばす */
                    break;
                default:
                    printf("不正な文字がありました\n");
                    printf("入力しなおしてください。\n");
                    while((c = getchar()) != EOF && c != '\n')
                        ;
                    break;
            }
        }
    }
    return 0;
}
