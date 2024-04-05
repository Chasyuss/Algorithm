#include <stdio.h>
#include <string.h>
int main()
{
    char arr[101];
    scanf("%s", arr);

    for (int i = 0; i <= strlen(arr) / 2; i++)
    {
        if (arr[i] != arr[strlen(arr) - i - 1])
        {
            printf("0");
            return 0;
        }
    }

    printf("1");
    return 0;
}