#include <stdio.h>

int main(void){
    int length, width, height;

    printf("長さを入力してください：");
    scanf("%d",&length);
    printf("幅を入力してください：");
    scanf("%d",&width);
    printf("高さを入力してください：");
    scanf("%d",&height);
    printf("体積は %d", length * width * height);

    return 0;
}
