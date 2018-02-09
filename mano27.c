#include <stdio.h>
#include<math.h>
int main(void) 
{
int m,b,lcm,gcd;
scanf("%d %d",&m,&b);
int i=2;
while(i<=m&&i<=b)
{
	if(m%i==0 && b%i==0)
	{
		gcd=i;
	}i++;
}
lcm=(m*b)/gcd;
printf("%d",lcm);

	return 0;
}
