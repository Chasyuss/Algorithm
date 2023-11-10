#include <stdio.h>
int main()
{
    int N, A, B; 
    scanf("%d %d %d", &N, &A, &B);

    if(A < B)
    {
        printf("Bus");
    }

    else if(A > B)
    {
        printf("Subway");
    }

    else
    {
        printf("Anything");
    }

    return 0; 

}