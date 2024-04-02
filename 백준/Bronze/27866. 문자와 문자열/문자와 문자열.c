#include <stdio.h>
int main()
{
    char word[1000];
    int n;
    scanf("%s", word);
    scanf("%d", &n);

    printf("%c", word[n - 1]); // 하나의 문자로 출력
    // 배열이 0부터 시작하니까 n-1

    return 0;
}