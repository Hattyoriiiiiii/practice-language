#include <stdio.h>

int sqr(int n)
{
    return n * n;
}

//--- int型整数の4乗値を返す関数 ---//
int pow4(int x)
{
    return sqr(x) * sqr(x);
}

int main(void)
{
    int number;
    puts("4つの整数を入力");
    printf("整数: "); scanf("%d", &number);

    printf("結果は%dです。\n", pow4(number));
    return 0;
}