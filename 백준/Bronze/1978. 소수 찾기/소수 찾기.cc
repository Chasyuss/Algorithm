#include<stdio.h>
int main()
{
        int n;
        int m;
        int count =0;

        scanf("%d", &n);

        for(int i =0; i<n; i++)
        {
                scanf("%d", &m);

                for(int j =2; j <= m; j++)
                {
                        if( m == j)
                        {
                                count++;
                        }
                        if( m % j == 0)
                        {
                                break;
                        }
                }
        }
        printf("%d\n", count);
        return 0;
}