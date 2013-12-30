#include <stdio.h>

void convert(void);

int main(void){
    convert();
    return 0;
}

void convert(void){
    int us_dollar;
    double  pound;
    printf("米ドルを入力してください：");
    scanf("%d",&us_dollar);
    pound =  us_dollar / 2.0;
    printf("%d 米ドルは %f 英国ポンドです", us_dollar,pound);
}
