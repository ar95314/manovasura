#include<stdio.h>
int main()
{
int k,i,sum=0;
printf("Enter a Number\n");
scanf("%d",&k);

for(i=k;i>=1;i--)
{
sum=sum+i;
}

printf("%d",sum);


return 0;
}
