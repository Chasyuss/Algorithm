#include<stdio.h>
int main()
{
        int n;
        int a;
        int b;
        scanf("%d", &n);
        n += (2400 - 2013);
        a = (n+5) % 12;
        b = (n+9) % 10;

        printf("%c%c\n", a + 'A', b+'0');
        return 0;
}