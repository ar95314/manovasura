#include<stdio.h>
int main()
{
    int fact=1;
    int i;
    int m;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
}
