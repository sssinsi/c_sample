#include <stdio.h>

int main(void){
    int num = 0, i, is_prime;

    for(; num <= 1;){
        printf("���肵������������͂��Ă��������F");
        scanf("%d",&num);
    }
    
    for(i = 2; i<num;i++){
        if((num % i) == 0){
            printf("%d ",i);
        }
    }

    return 0;
}
