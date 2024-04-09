#include <stdio.h>
#include <string.h>
int main()
{
    int N;
    scanf("%d", &N);

    int group = 0;
    for (int i = 0; i < N; i++)
    {
        char word[101];
        scanf("%s", word);

        // 그룹단어 확인
        int alpa[26];
        for (int j = 0; j < 26; j++)
        {
            alpa[j] = 0;
        }

        for (int k = 0; k < strlen(word); k++)
        {
            char letter = word[k];
            if (alpa[letter - 'a'] == 0)
            {
                alpa[letter - 'a'] = 1;
            }
            else // 이미 1이라면 바로 앞 문자 확인
            {
                if (word[k - 1] != word[k]) // 앞의 문자랑 다르면 그룹단어가 아님
                {
                    break;
                }
            }

            if (k == strlen(word) - 1)
            {
                group++;
            }
        }
    }

    printf("%d\n", group);
}