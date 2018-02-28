#include<stdio.h>
void main()
{
    int N,L,R,i,flag=0;
    printf("\nenter N,L,R values");
    scanf("%d%d%d",&N,&L,&R);
    for(i=L;i<R;i++)
    {
        if(i==N)
        {
            flag=1;
        }
        L++;
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
