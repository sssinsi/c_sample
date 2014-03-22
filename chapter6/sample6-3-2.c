#include <stdio.h>

int main(void)
{
    float balance[10][5];
    float *p;
    p=(float *)balance;
    printf("%p ",(p + (3 * 5)+1));
    printf("%f ",*(p + (3 * 5)+1));
}
