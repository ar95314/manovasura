#include<stdio.h>
#include<conio.h>
void main()
{
 long int x,y,i;
printf("enter the interval");
scanf("%ld%ld",&x,&y);
printf("odd numbers between the interval");
for(i=x+1;i<y;i++)
{
if((i%2)!=0)
{
printf("%d\n",i);
}
}
getch();
}
