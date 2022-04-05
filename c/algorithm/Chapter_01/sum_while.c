#include <stdio.h>

// 1, 2, ..., nの総和を求める
int main(void)
{
    int n;

    printf("1からnまでの総和を求めます。\n");
    printf("n: "); scanf("%d", &n);

    int sum = 0;
    int i = 1;

    while (i <= n) {
        sum += i;
        i++;
    }
    printf("1から%dまでの総和は、%dです。\n", n, sum);

    return 0;
}