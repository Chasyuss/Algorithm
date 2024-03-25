#include<stdio.h>
int main(void)
{
int t,n;
scanf("%d", &t);

int a[70];
a[0]=0;
a[1]=1;
for(int i=2; i<=40; i++)
{
  a[i]=a[i-1]+a[i-2];
}
for(int i=0; i<t; i++)
{
  scanf("%d",&n);
  if(n==0)
  {
    printf("1 0\n");
  }
  else
  {
  printf("%d %d\n", a[n-1],a[n]);
  }
}
return 0;
}