#include <stdio.h>

int main(void){
    char ch;
    int i,count;

    count=0;

    for(ch=getchar();ch !='\n' && count<10 ; ch=getchar()){
        i = 0;
        printf("%d",ch);
        while(i<ch){
            printf(".");
            i++;
        }
        printf("\n");
        count++;
    }
    return 0;
}
