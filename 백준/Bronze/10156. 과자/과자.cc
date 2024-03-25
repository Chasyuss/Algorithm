#include<stdio.h>
int main()
{
        int k;
        int n;
        int m;
        scanf("%d %d %d", &k,&n,&m);

        if(k * n > m)
        {
                printf("%d", k*n-m);
        }
        else
        {
                printf("0");
        }
}