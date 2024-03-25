#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int N, M, k;
	scanf("%d %d %d", &N, &M, &k); 

	int team = min(N / 2, M);
	int alone = N + M - (team * 3);
	k -= alone; 

	if (k < 0)
	{
		printf("%d", team);
	}
	else
	{
		printf("%d", team-(k+2)/3);
	}

	return 0;
}