#include<stdio.h>
int main(void)
{
        int a[10];
        int b[10];
        int win1 =0;
        int win2 =0;

        for( int i=0; i<10; i++)
        {
                scanf("%d", a+i);
        }
        for(int i=0; i<10; i++)
        {
                scanf("%d", b+i);
        }
        for(int i=0; i<10; i++)
        {
                if(a[i] > b[i])
                {
                        win1++;
                }
                else if(a[i] < b[i])
                {
                        win2++;
                }
        }
        if(win1>win2)
        {
                printf("A\n");
        }
        else if ( win1<win2)
        {
                printf("B\n");
        }
        else
        {
                printf("D\n");
        }
}