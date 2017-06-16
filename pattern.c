/* 
  Given an array of numbers, print the following pattern.
  
  Input   : 11,12,13,14,15,16
  Output  : 11
            12 14
            13 15 16
            
  Input   : 100,201,302
  Output  : 100
            201 302
*/

#include<stdio.h>
#include <stdlib.h>
int sum(int n)
{
    int s=0,i=0;
    while(n)
    {
        s=s+i;
        if(s==n)
            return i;
        i++;
    }
}
int main()
{
    int *a,n=0,i=0,j,k=0,t;
    char ch;
    while(ch!='\n')
    {
        scanf("%d",&a[n]);
        scanf("%c",&ch);
        n++;
    }
    t=sum(n);
    for(i=0;i<t;i++)
    {
        k=i;
        for(j=0;j<=i;j++)
        {
            printf("%d ",a[k]);
            k=k+t-j-1;
        }
        printf("\n");
    }
    return 0;
}
