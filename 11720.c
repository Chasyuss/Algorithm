#include <stdio.h>
int main()
{
    int N; 
    int sum = 0;
    char num[100];

    scanf("%d", &N);
    scanf("%s", num);

    for(int i =0; i<N; i++)
    {
        sum += num[i] - '0';
    }
     printf("%d",sum);
     return 0; 
}