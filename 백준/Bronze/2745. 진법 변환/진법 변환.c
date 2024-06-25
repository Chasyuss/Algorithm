#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char text[10000];
    int num;
    int result = 0;

    scanf("%s %d", text, &num);

    int count = strlen(text);

    for (int i = 0; i < count; i++)
    {
        int digit;
        if (text[i] >= '0' && text[i] <= '9')
        {
            digit = text[i] - '0';
        }
        else if (text[i] >= 'A' && text[i] <= 'Z')
        {
            digit = text[i] - 'A' + 10;
        }
        result += digit * pow(num, count - 1 - i);  //진법 바꾸기
    }
    printf("%d", result);
    return 0;
}