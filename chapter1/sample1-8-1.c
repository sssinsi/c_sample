#include <stdio.h>

int get_sqr(void);

int main(void){
    int sqr;

    sqr = get_sqr();
    printf("2æ’l: %d", sqr);

    return 0;
}

int get_sqr(void){
    int num;

    printf("”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢F");
    scanf("%d",&num);

    return num * num;
}
