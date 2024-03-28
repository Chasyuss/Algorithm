#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int result = 0;
    int max = 0;

    if (a == b && b == c && a == c)
    {
        result = 10000 + a * 1000;
    }

    else if (a == b || a == c)
    {
        result = 1000 + a * 100;
    }

    else if (b == c)
    {
        result = 1000 + b * 100;
    }

    else
    {
        if (a > b && a > c)
            max = a;
        else if (b > a && b > c)
            max = b;
        else if (c > a && c > b)
            max = c;

        result = max * 100;
    }

    printf("%d", result);
}
