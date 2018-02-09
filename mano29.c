#include <stdio.h>
#include <stdlib.h>
int main ( void )
{
int min;
scanf("%d",&min);
if ( (min / 60) == 1 )
printf("%d ",min/60);
else 
printf("%d ",min/60);

if ( (min % 60) == 1) 
printf("%d",min%60);
else 
printf("%d",min%60);

return 0;
}
