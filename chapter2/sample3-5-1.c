#include <stdio.h>

int main(void){
    int g;

    do{
        printf("\nガロン：");
        scanf("%d",&g);
        printf("換算リットル：%f",3.7854 * g);
    }while(1);

    return 0;
}
