#include <stdio.h>

void convert(void);

int main(void){
    convert();
    return 0;
}

void convert(void){
    int us_dollar;
    double  pound;
    printf("�ăh������͂��Ă��������F");
    scanf("%d",&us_dollar);
    pound =  us_dollar / 2.0;
    printf("%d �ăh���� %f �p���|���h�ł�", us_dollar,pound);
}
