#include <stdio.h>

int main(void){
    int count,i;
    int l;
    int v;
    printf("�v�Z�񐔂���͂��Ă��������F");
    scanf("%d",&count);

    for(i=1 ;i <= count ; i++){
        printf("\n%d��ڂ̌v�Z\n",i);
        printf("�����F");
        scanf("%d",&l);
        printf("���x�F");
        scanf("%d",&v);

        printf("���v���Ԃ́F%f",(1.0 *l / v));
    }

    return 0;
}
