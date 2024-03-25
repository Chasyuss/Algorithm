#include <stdio.h>
int main()
{
  int n, a[100005],sum,max;
  scanf("%d",&n);

  for(int i=0; i<n; i++)
  {
    scanf("%d", &a[i]);
  }
    sum= a[0];
    max = a[0];

    for(int i=1; i<n; i++)
    {
      if((sum+a[i])>a[i])
        sum +=a[i];
      else
        sum = a[i];
      if(sum>max)
        max=sum;
    }
  printf("%d",max);
  return 0;
}