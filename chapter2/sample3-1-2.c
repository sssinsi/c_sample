#include <stdio.h>

int main(void){
    int i;
    for(i=65;i < 65 + 26 ; i++){
        printf("%d:",i);
        printf("%c,",i);
        printf("%d:",i+32);
        printf("%c\n",i+32);
    }
    return 0;
}
