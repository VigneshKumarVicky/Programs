//Given two arrays, find the minimun absolute difference between the integers.

/*
    Input   : 5
              2 2 2 2 2 
              3 3 3 3 3 
    Output  : 5
    
    Input   : 4
              4 1 8 7
              2 3 5 6
    Output  : 6
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[100],b[100],i,j,s=0,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]<b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
       s=s+abs(a[i]-b[i]);
    }
    printf("%d",s);
    return 0;
}
