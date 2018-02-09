#include<stdio.h>
int main(void)
{
	int i,x[100],n,temp=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(x[j]>x[j+1])
			{
				temp=x[j];
				x[j]=x[j+1];
				x[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",x[i]);
	}
}
