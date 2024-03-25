#include<stdio.h>
int main(void)
{
        int arr[10];
        int max=0;
        int n = 0;

        for(int i=1;i<10;i++)
        {
                scanf("%d", &arr[i]);
        }
        for(int i =1; i<=9; i++)
        {
                if(max < arr[i])
                {
                        max = arr[i];
                        n = i;
                }
        }
        printf("%d\n%d", max, n);
        return 0;
}