#include <stdio.h>
#include <string.h>

int main()
{
    char arr[255];

    while(1)
    {
        int count = 0; 
        scanf("%[^\n]s",arr);
        getchar();


        for(int i = 0; arr[i] != '\0'; i++)
        {
            if(arr[i] =='a' || arr[i] == 'A')
                count++;

            else if(arr[i] =='e' || arr[i] == 'E')
                count++;

            else if(arr[i] =='i' || arr[i] == 'I')
                count++;

            else if(arr[i] =='o' || arr[i] == 'O')
                count++;
            
             if(arr[i] =='u' || arr[i] == 'U')
                count++;
        }

        if(arr[0] =='#')
            break;
        else 
            printf("%d\n", count);
    }
    return 0;
}
