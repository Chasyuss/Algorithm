#include <stdio.h>
int main(void)
{
    int year;
    scanf("%d", &year);

    int ans;
    if (year % 400 == 0)
    {
        ans = 1;
    }
    else if (year % 100 == 0)
    {
        ans = 0;
    }

    else if (year % 4 == 0)
    {
        ans = 1;
    }

    else
    {
        ans = 0;
    }

    printf("%d\n", ans);
    return 0;
}