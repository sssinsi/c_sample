#include <stdio.h>

float o_to_c(int o);

int main(void){
    int o;
    float c;

    printf("�I���X����͂��Ă��������F");
    scanf("%d", &o);
    c = o_to_c(o);
    printf("%d �I���X��%f �J�b�v�ł�",o,c);
    return 0;
}

float o_to_c(int o){
    return o / 8.0;
}
