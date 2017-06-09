/*
Print the pattern based on the given n value.

Input   : 5
Output  : 15 10 6 3 1
          14 9  5 2
          13 8  4
          12 7
          11
          
Input   : 3
Output  : 6 3 1
          5 2
          4
     
*/

#include<stdio.h>
#include <stdlib.h>
int sum(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    return s;
}
int main()
{
    int n,c,p,i,j;
    scanf("%d",&n);
    c=sum(n);
    for(i=0;i<n;i++)
    {
        p=c-i;
        for(j=0;j<n-i;j++)
        {
            printf("%d ",p);
            p=p-n+j;    
        }
        printf("\n");
    }
    return 0;
}
