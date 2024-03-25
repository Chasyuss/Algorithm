#include<stdio.h>
int main()
{
        int h, m;
        scanf("%d %d", &h, &m);
        if(m<45)
        {
                if ( h == 0)
                {
                        h=23;
                        m = m + 60 - 45;
                        printf("%d %d", h,m);
                }
                else if( h > 0)
                {
                        h = h-1;
                        m = m + 60 - 45;
                        printf("%d %d", h,m);
                }
        }
        else if ( m >=45)
        {
                if ( h == 0)
                {
                        m = m-45;
                        printf("%d %d", h,m);
                }
                else if(h > 0)
                {
                        m = m- 45;
                        printf("%d %d", h,m);
                }
        }
        return 0;
}