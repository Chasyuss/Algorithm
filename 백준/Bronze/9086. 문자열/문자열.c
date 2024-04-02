#include <stdio.h>
#include <string.h>
int main()
{
    int num;
    scanf("%d", &num);
    char word[1000];

    for (int i = 0; i < num; i++)
    {
        scanf("%s", word);
        printf("%c%c\n", word[0], word[strlen(word) - 1]);
    }

    return 0;
}