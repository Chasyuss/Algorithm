#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    
    if(num1 < num2)
    {
        return -1;
    }

    if(num1 > num2)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int num[1000000];
    int n; 
    scanf("%d", &n);

    for(int i = 0; i<n; i++)
    {
        scanf("%d", &num[i]);
    }
    qsort(num,n,sizeof(int),compare);

    for(int j = 0; j<n;j++)
    {
        printf("%d\n", num[j]);
    }
    return 0; 
}
