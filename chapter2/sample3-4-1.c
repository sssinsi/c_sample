#include <stdio.h>

int main(void){
    int count,l,v;

    printf("�񐔂���͂��Ă�������:");
    scanf("%d",&count);

    while(count){
        printf("�����F");
        scanf("%d",&l);
        printf("���x�F");
        scanf("%d",&v);

        printf("���v���ԁF%f\n", (1.0 * l / v));

        count--;
    }
    return 0;

}
