#include<stdio.h>
#include<string.h>
#define max 1000
void main()
{
    char str[max],str1[max];
    int i;
    printf("\nenter a new string");
    scanf("%s",&str);
    strcpy(str1,str);
    strrev(str);
    if(strcmp(str,str1)==0)
    {
    printf("\nyes");
    }
    else
    {
    printf("\nno");
    }
}
