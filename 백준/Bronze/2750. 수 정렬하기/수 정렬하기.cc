#include<stdio.h>
int main()
{
        int arr[1000] = {0,};
        int tmp;
        int n;
        scanf("%d\n", &n);

        for( int i = 0; i<n;i++)
        {
                scanf("%d", &arr[i]);
        }
        for(int i = 0; i<n; i++)
        {
                for(int j=0; j<n; j++)
                {
                        if(arr[j] > arr[i])
                        {
                                tmp = arr[j];
                                arr[j] = arr[i];
                                arr[i] = tmp;
                        }
                }
        }
        for(int i = 0; i<n; i++)
        {
                printf("%d\n", arr[i]);
        }
}