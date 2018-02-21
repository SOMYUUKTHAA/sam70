#include<stdio.h>
void main()
{
int n,i,n1;
printf("\nenter value\n");
scanf("%d",&n);
if(n%10!=0)
{
n%=10;
n1=10-n;
n+=n1;
printf("\nnearest value is:%d\n",n);
}
else
{
printf("\nnearest value is:%d\n",n);
}
}
