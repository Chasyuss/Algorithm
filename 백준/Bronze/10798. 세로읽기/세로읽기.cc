#include<stdio.h>
int main(void)
{
        char arr[5][15];
        for(int i=0; i<5;i++)
        {
                for(int j=0; j<15;j++)
                {
                        arr[i][j]=0;
                }
        }
        for(int i=0; i<5;i++)
        {
                scanf("%s", arr[i]);
        }
        for(int j=0; j<15;j++)
        {
                for(int m=0;m<5;m++)
                {
                        if(arr[m][j] != NULL)
                        {
                                printf("%c", arr[m][j]);
                        }
                }
        }
        return 0;
}