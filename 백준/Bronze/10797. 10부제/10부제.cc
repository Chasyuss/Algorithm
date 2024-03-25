#include<stdio.h>
int main()
{
        int day;
        int num[5];
        int count = 0;
        scanf("%d", &day);

        for(int i=0;i<5;i++)
        {
                scanf("%d", &num[i]);
                if(day == num[i])
                {
                        count++;
                }
        }
        printf("%d", count);
        return 0;
}