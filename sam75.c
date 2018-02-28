#include<stdio.h>
#define max 1000
void main()
{
int i;
char str;
printf("\nenter string");
scanf("%s",&str);
i=strlen(str);
i/=2;
str[i]='*';
printf("%s",str);
}
