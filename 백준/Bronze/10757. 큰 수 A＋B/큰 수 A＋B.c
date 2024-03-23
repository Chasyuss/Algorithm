#include <stdio.h>
#include <string.h>

void rev(char arr[]){
    int len = strlen(arr);
    char tmp;
    for (int i =0; i<len/2; i++)
    {
        tmp = arr[i];
        arr[i] = arr[len-i-1];
        arr[len-i-1] = tmp;
    }
}

int main(void)
{
    char A[10002] = { 0 };
    char B [10002] = { 0 };
    char c [10002] = { 0 };
    int namuji = 0; 

    scanf("%s %s", A, B);
    rev(A);
    rev(B);

    int len1 = strlen(A);
    int len2 = strlen(B);
    int max = 0; 

    if(len1 > len2)
    {
        max = len1; 
    }

    else{
        max = len2;
    }

    for(int i = 0; i< max; i++)
    {
        int sum = A[i] - '0' + B[i] - '0' + namuji;
        if(sum < 0)
        {
            sum +='0';
        }

        if(sum > 9 )
        {
            namuji = 1;
        }

        else
        {
            namuji = 0; 
        }

        c[i] = sum % 10 + '0';
    }

    if(namuji == 1)
    {
        c[max] = '1';
    }
    rev(c);
    printf("%s", c);
    return 0; 
}