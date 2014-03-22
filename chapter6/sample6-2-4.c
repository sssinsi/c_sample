#include <stdio.h>

int main(void)
{
    float *p;
    p=100;
    printf("%p ", p);
    p = p + 2;

    printf("%p ", p);
    return 0;
}
