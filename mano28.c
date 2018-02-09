#include<stdio.h>
int main(void)
{
	int i,m[100],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d %d\n",m[i],i);
	}
}
