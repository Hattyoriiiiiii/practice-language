#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;

    printf("n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += i;
    
    // printf("1から%dまでの総和は、%dです。\n", n, sum);
    for (int i = 1; i <= n; i++)
        if (i < n)
            printf("%d + ", i);
        else
            printf("%d ", i);
    printf("= %dです。", sum);
    
    return 0;
}