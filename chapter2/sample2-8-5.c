#include <stdio.h>

int main(void){
    int i;
    
    for(i = 1 ; i <= 100; i++){
        
        printf("%d",i);
        
        if((i % 5) == 0){
            printf("\n");
        }else{
            printf("\t");
        }
    }
    return 0;
}
