#include <stdio.h>

int main(void){
    int answer,input,i;
    answer=23;
    
    for(i=10;i > 0;i--){
        printf("%d ��ځF",i);
        scanf("%d",&input);
        
        if(answer == input){
            printf("������I");
            return 0;   
        }

        if(answer < input){
            printf("%d��菬�����ł��B\n",input);
        }else{
            printf("%d���傫���ł��B\n",input);
        }
    }
    printf("�c�O�ł����B������%d�ł����B",answer);
    return 0;
}
