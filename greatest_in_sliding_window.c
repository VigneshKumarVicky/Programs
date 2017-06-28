//Given K integers and a window size.Print the greatest number in each window.

/*
    Input   : 3 5
              23 11 5 12 9 
    Output  : 23 12 12 ((23,11,5),(11,5,12),(5,12,9))
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,k,a[1000],i,j,m;
    scanf("%d%d",&n,&k);
    for(i=0;i<k;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=k-n;i++)
    {
        m=0;
        for(j=i;j<=i+n-1;j++)
        {
            if(a[j]>m)
                m=a[j];
        }
        printf("%d ",m);
    }
    return 0;
}
