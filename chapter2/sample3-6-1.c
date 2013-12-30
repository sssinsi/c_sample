#include <stdio.h>

int main(void){
    int i,j,is_prime;
    
    is_prime=1;

    for(i=2;i<=1000;i++){
        is_prime = 1;
        for(j=2; j <= i/2;j++){
            if((i % j) == 0){
                is_prime=0;
            }
        }
        if(is_prime == 1){
            printf("%d‚Í‘f”‚Å‚·\n",i);
        }
    }

    return 0;
}
