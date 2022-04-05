#include <stdio.h>

// 3つの値の中央値を求める
int med3(int a, int b, int c)
{
    if (a >= b)
        if (b >= c)
            return b;
        else if (a <= c)
            return a;
        else
            return c;
    else if (a > c)
        return a;
    else if (b > c)
        return c;
    else
        return b;
}

int main(void)
{
    int a, b, c;

    printf("3つの整数値の中央値を求める。\n");
    printf("a: "); scanf("%d", &a);
    printf("b: "); scanf("%d", &b);
    printf("c: "); scanf("%d", &c);

    printf("中央値は%dです。\n", med3(a, b, c));
    return 0;
}