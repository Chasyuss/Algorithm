#include <stdio.h>
int main()
{
    int arr[1000000];
    int tmp; 

    for(int i =0; i<3; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0; i<3; i++)
    {
        for(int k= 0; k<2-i; k++)
        {
            if(arr[k] > arr[k+1])
            {
                tmp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = tmp;
            
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("%d ", arr[i]); //여기에 공백 안넣은거 ㄹㅈㄷ 
    }
    return 0; 

}