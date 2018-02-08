#include<stdio.h>
int main()
{
int m,b,c,d,e=0;
printf("\n Enter the range....");
scanf("%d%d",&b,&c);

for (m=b;m<=c;a++)
  {
     for(d=2; d<=m/2; ++d)
  {
if(a%d==0)
        {
            e=1;
            break;
        }
 }

    if (e==0)
printf("\n%d",m);
 }
return 0;
getch();
}
