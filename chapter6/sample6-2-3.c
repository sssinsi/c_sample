#include <stdio.h>

int main(void)
{
    int *p,q;
    p=&q;
    q=1;
    printf("%p ",p);/* show pointer  */
    
    (*p)++;/* this is increment p. */
    printf("%d %p",q,p);

    return 0;
}
