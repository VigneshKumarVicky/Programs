//Given a matrix,print the sum of elements other than those are at edges.

/*
    Input   : 4
              1 2 3 4
              5 6 7 8 
              9 1 2 3 
              4 5 6 7
    Output  : 16 (6++1+2)
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,s=0,a[10][10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i!=0 && j!=0 && i!=n-1 && j!=n-1)
                s=s+a[i][j];
        }
    }
    printf("%d",s);
    return 0;
}
