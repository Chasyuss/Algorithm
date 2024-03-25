#include<stdio.h>
int main()
{
        int n;
        scanf("%d", &n);
        for(int i =1; i<= n; i++)
        {
                for( int j=1; j <i; j++)
                {
                        printf(" ");
                }
                for( int k = (n * 2) -1; k >= (i * 2) - 1; k--)
                {
                        printf("*");
                }
                printf("\n");
        }
        for(int i = 1;i <= (n-1); i++)
        {
                for(int j= (n - 2); j >= i; j--)
                {
                        printf(" ");
                }
                for(int k = 1; k <= (i * 2) + 1; k++)
                {
                        printf("*");
                }
                printf("\n");
        }
}