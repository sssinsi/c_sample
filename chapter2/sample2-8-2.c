#include <stdio.h>

int main(void){
    int i, room_count;
    float area,sum;

    printf("����������͂��Ă��������F");
    scanf("%d",&room_count);

    if(!room_count){
        printf("��������0�̂��ߏI�����܂��B");
        return 0;
    }

    for(i = 1; i <= room_count; i++){
       printf("%d�����ڂ̖ʐ�m2����͂��Ă��������F", i);
       scanf("%f",&area);
       sum = sum + area;   
    }

    printf("���ʐς�%f(m2)",sum);

    return 0;
}
