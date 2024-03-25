#include <stdio.h>
int main() 
{
	int n,tmp;
    int sum = 0;
	int t[1000];
	scanf("%d", &n);

	for(int i=0; i<n; i++) 
  {
		scanf("%d", &t[i]);
	}
	for(int i=0; i<n; i++) 
  {
		for(int j=0; j<n-(i+1); j++) 
    {
			if(t[j] > t[j+1]) 
      {
				tmp = t[j];
				t[j] = t[j+1];
				t[j+1] = tmp;
			}
		}
	}
	for(int i=0; i<n; i++) 
  {
		for(int j=0; j<i+1; j++) 
    {
			sum = sum + t[j];
		}
	}
	printf("%d", sum);
}