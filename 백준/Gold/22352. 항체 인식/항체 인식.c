#include <stdio.h>
 int a[40][40];
 int b[40][40];
 int n,m,k;

void bfs(int x, int y, int be, int af)
{
  a[x][y]=af;
  if(a[x-1][y]==be && x!=0) bfs(x-1,y,be,af);
  if(a[x+1][y]==be && x!=(n-1)) bfs(x+1,y,be,af);
  if(a[x][y-1]==be && y!=0) bfs(x,y-1,be,af);
  if(a[x][y+1]==be && y!=(m-1)) bfs(x,y+1,be,af);
}
int main(void) 
{
  scanf("%d",&n);
  scanf("%d",&m);

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m;j++)
    {
      scanf("%d",&a[i][j]); //접종전 
    }
  }
  for(int i=0; i<n;i++)
  {
    for(int j=0; j<m; j++)
    {
      scanf("%d",&b[i][j]);//접종후
    }
  }

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      if(a[i][j]!=b[i][j])
      {
        bfs(i,j,a[i][j],b[i][j]);
        k=1;
        break;
      }
    } 
    if(k==1) 
    {
      break;
    }
  }

  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      if(a[i][j]!= b[i][j])
      {
        printf("NO");
        return 0;
      }
    }
  }
  printf("YES");
  return 0;
}