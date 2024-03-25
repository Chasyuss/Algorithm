#include<stdio.h>
int main()
{
        int a1, a2, a3, a4;
        scanf("%d %d", &a1,&a2);

        a3 = (a1 / 100) + (((a1 / 10) % 10) * 10) + ((a1 % 10) * 100);
        a4 = (a2 / 100) + (((a2 / 10) % 10) * 10) + ((a2 % 10) * 100);

        if ( a3 > a4)
        {
                printf("%d", a3);
        }
        else
        {
                printf("%d", a4);
        }
        return 0;
}