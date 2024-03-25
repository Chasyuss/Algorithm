#include<stdio.h>
int main()
{
        int a,b;
        int sum=0;
        int n;
        scanf("%d", &n);

        for(int i=0; i<n;i++)
        {
                scanf("%d %d", &a,&b);

                if(a<b)
                {
                        sum+= b%a;
                }
                else if(a>b)
                {
                        sum+=b;
                }
        }
        printf("%d", sum);
}