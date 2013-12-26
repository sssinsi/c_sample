#include <stdio.h>

int main(void)
{
    float a;
    float b;
    
    printf("浮動小数点数１を入力してください：");
    scanf("%f", &a);
    
    printf("浮動小数点数２を入力してください：");
    scanf("%f", &b);
    
    printf("合計：%f", a+b);
    
    return 0;
    
}
