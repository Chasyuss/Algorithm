#include <stdio.h>
int main(void)
{
    int X, N;
    scanf("%d", &X); // 가격
    scanf("%d", &N); // 개수

    int a, b;
    int ans = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &a, &b);
        ans += a * b; // 총 가격
    }

    if (X == ans)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}