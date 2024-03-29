#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[100];  // 수
    int v;       // v 확인
    int cnt = 0; // 카운트

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &v);

    for (int j = 0; j < n; j++)
    {
        if (a[j] == v)
        {
            cnt++;
        }
    }
    printf("%d", cnt);
}