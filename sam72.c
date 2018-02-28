#include<stdio.h>
#define max 1000
void main()
{
  char c[max];
  int i,flag=0;
  printf("Enter a string\n");
  scanf("%s",&c);
  for(i=0;c[i]!='\0';i++)
  {
  if(c[i]=='A'||c[i]=='a'||c[i]=='e'||c[i]=='E'||c[i]=='I'||c[i]=='i'||c[i]=='O'||c[i]=='o'||c[i]=='U'||c[i]=='u')
  {
      flag=1;
  }
  }
  if(flag==1)
  {
  printf("\nyes");
  }
  else
  {
  printf("\nno");
  }      
}
