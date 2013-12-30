#include <stdio.h>

float o_to_c(int o);

int main(void){
    int o;
    float c;

    printf("オンスを入力してください：");
    scanf("%d", &o);
    c = o_to_c(o);
    printf("%d オンスは%f カップです",o,c);
    return 0;
}

float o_to_c(int o){
    return o / 8.0;
}
