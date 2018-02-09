#include <stdio.h>
#include<time.h>
int main()
{
	int hr,min,hr1,min1,v1,v2;
	scanf("%d %d",&hr,&min);
	scanf("%d %d",&hr1,&min1);
	v1=abs(hr-hr1);
	v2=abs(min-min1);

	printf("%d %d",v1,v2);
	return 0;
}
