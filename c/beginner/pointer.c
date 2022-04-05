#include <stdio.h>

int main(void)
{
    // int *p == NULL;
    int *p;
    int i;
    p = &i;
    *p = 10;

    // printf("p = %p\n", p);
    // printf("&i = %p\n", &i);
    printf("*p = %d\n", *p);
    printf("i = %d\n", i);
    return 0;
}