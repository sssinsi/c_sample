#include <stdio.h>

int main(void){
    int num1,num2,select;

    printf("第１の整数を入力してください：");
    scanf("%d",&num1);
    printf("第２の整数を入力してください：");
    scanf("%d",&num2);
    printf("計算を選択してください(0:和、0以外:積)：");
    scanf("%d",&select);

    if(select == 0){
        printf("和：%d",num1 + num2);
    }else{
        printf("積：%d",num2 * num2);
    }
    return 0;
}
