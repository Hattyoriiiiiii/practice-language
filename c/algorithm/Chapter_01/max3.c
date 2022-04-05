#include <stdio.h>

// 3つの整数値を読み込んで最大値を求める
int main(void)
{
    int a, b, c;

    printf("3つの整数値の最大値を求めます。\n");
    printf("a: "); scanf("%d", &a);
    printf("b: "); scanf("%d", &b);
    printf("c: "); scanf("%d", &c);

    int max = a;
    if (b > max) max = b;
    max = b > max ? b : max;
    if (c > max) max = c;
    printf("最大値は%dです。\n", max);

    return 0;
}