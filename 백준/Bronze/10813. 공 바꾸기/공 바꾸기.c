#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a, b; // 입력값
    int arr[101] = {
        0,
    };
    int tmp = 0;

    for (int i = 1; i <= n; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        // 공 바꾸기
        tmp = arr[a];
        arr[a] = arr[b];
        arr[b] = tmp;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
}