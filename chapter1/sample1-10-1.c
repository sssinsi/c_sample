#include <stdio.h>

int main(void){
    float waight;
    printf("体重(kg)を入力してください：");
    scanf("%f",&waight);
    printf("月面での体重は %f kgです",waight * 0.17);
}
