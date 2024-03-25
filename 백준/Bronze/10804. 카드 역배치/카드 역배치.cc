#include<stdio.h>
int main()
{
        int arr[20];
        int a;
        int b;
        int n;
        int m;
        for(int i=0; i<20; i++)
        {
                arr[i] = i+1;
        }

        for(int j=0; j<10; j++)
        {
                scanf("%d %d", &a,&b);
                m = 1;
                for(int k=a; k<=(a+b)/2; k++)
                {
                        n = arr[k-1];
                        arr[k-1] = arr[b-m];
                        arr[b-m] = n;
                        m++;
                }
        }
        for(int z=0; z<20; z++)
        {
                printf("%d ", arr[z]);
        }
        return 0;
}