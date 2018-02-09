#include<stdio.h>
void main()
{
int n,sum=0,i,m[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&m[i]);
}
for(i=0;i<n;i++)
{
sum=sum+m[i];
}
printf("median is %d",sum/n;
}
