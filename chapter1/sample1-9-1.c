#include <stdio.h>

void outnum(int num);

int main(void){
    outnum(10);
    outnum(12);
    return 0;
}

void outnum(int num){
    printf("%d",num);
}
