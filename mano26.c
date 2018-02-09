#include<stdio.h>
int main()
{
int x,re=0;
printf("enter the number:");
scanf("%d",&x);
while(a!=0)
{
re=re*10;
re=re+x%10;
x=x/10;
}
printf("the reverse of the number",re);
return 0;
}
