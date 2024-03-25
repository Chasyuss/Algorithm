#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
  long a[100];
  a[0] = 0;
  a[1] = 1;
  int n;
  scanf("%d",&n);

  for(int i=2; i<=n; i++)
  {
   a[i] = a[i-1] + a[i-2];
  }
  printf("%ld",a[n]);
  return 0; 
}