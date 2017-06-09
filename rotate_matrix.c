/*
Given a m*n matix,rotate the matrix to 90 degree in anti-clockwise direction and print the corresponding matrix.
Input   : 3 2
          3  8
          11 2
          9  7
Output  : 8 2  7
          3 11 9
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,a[15][15],i,j,k;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    k=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[j][k]);
        }
        k--;
        printf("\n");
    }
    return 0;
}
