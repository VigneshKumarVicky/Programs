//Given a matix of integers,print the sum of elements in the diagonals.

/*
      Input   : 4
                1 2 3 4
                5 6 7 8
                8 9 1 2 
                3 4 5 6
      Output  : 37 (1+6+1+6+3+9+7+4)
      
      Input   : 3
                1 2 3
                4 5 6
                7 8 9
                
      Output  : 25 (1+5+9+7+3)
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,a[10][10],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || i+j==n-1)
                s=s+a[i][j];
        }
    }
    printf("%d",s);
}
