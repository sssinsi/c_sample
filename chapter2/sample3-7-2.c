#include <stdio.h>

int main(void){
    char ch;
    int doller;
    doller = 1;

    while(1){
        if(ch != '\n'){
            printf("\n������(Y/N):");
        }
        ch=getchar();
        if(ch == 'N'){
            break;
        }
        if(ch != '\n'){
            printf("�`�b�v�䗦(10% 15% 20%):");
            printf("%f %f %f\n",doller * 0.1,doller*0.15,doller * 0.2);
            doller++;
        }
    }

    return 0;
}
