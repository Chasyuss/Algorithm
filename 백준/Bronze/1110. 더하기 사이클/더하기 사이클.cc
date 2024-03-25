#include<stdio.h>
int main()
{
        int n;
        int tmp;
        int a,b,c,d;
        int count =0;

        scanf("%d", &n);
        tmp = n;

        while(1)
        {
                a = n / 10;
                b = n % 10;
                c = (a+b) % 10;
                d = (b*10) + c;

                n =d;
                count++;

                if (tmp == d)
                {
                        break;
                }
        }
        printf("%d", count);
}