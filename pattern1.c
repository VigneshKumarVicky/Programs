//Prints a pattern
Input   : 5
Output  : 1 6 10 13 15
          2 7 11 14
          3 8 12
          4 9
          5
          
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n,c,t=0,a[50];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=i;
        for(j=i;j<=n;j++)
        {
            printf("%d",c);
            c=c+n-t;
            t++;
        }
        t=0;
        printf("\n");
    }
    return 0;
}
