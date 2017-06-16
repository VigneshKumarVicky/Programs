//Rotate the matrix 90 degree in clockwise direction.
/*
    Input   : 2
              3
              4 5 6
              1 2 3
    Output  : 1 4
              2 5 
              3 6
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,a[15][15];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=m-1;j>=0;j--)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
