#include<stdio.h>
#include<string.h>
#define max 1000
void main()
{
int i,loo;
char str[max];
printf("\nenter string");
scanf("%s",&str);
i=strlen(str);
if(i%2!=0)
{
i/=2;
str[i]='*';
printf("%s",str);
}
else
{
    i/=2;
    str[i]='*';
    --i;
    str[i]='*';
    printf("%s",str);
}
}
