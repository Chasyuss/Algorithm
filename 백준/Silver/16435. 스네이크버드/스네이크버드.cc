#include <stdio.h>

int main(void) 
{
  int arr[10000];
  int n,l;
  scanf("%d %d", &n, &l);
  int tmp;

  for(int i=0; i<n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for(int j=0; j<n; j++)
  {
    for(int k=0; k< n-1; k++)
    {
      if(arr[k] > arr[k+1])
      {
        tmp = arr[k];
        arr[k] = arr[k+1];
        arr[k+1] = tmp;
      }
    }
  }
  for(int i=0; i<n; i++)
  {
    if(arr[i] <= l)
    {
      l+=1;
    }
  }
  printf("%d",l);
  return 0;
}