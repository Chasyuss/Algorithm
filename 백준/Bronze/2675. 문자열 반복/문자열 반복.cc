#include<stdio.h>
#include<string.h>
int main()
{
        int a, b;
        char s[20];
        scanf("%d", &a);

        for(int i=0; i<a; i++)
        {
                scanf("%d %s", &b,s);

                for(int i=0; i<strlen(s); i++)
                {
                        for(int j=0; j<b;j++)
                        {
                                printf("%c", s[i]);
                        }
                }
                printf("\n");

        }
}