//Given M and N elements in non-decreasing order. Merge them as a single array in a non-decreasing order.

/*
    Input   : 4
              1 5 7 7
              4
              0 1 2 3
    Output  : 0 1 1 2 3 5 7 7
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,a[20],b[20];
    scanf("%d",&m);
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    i=0;
    j=0;    
    while(1)
    {
        if(a[i]<b[j])
        {
            printf("%d\n",a[i]);
            i++;
        }
        else
        {
            printf("%d\n",b[j]);
            j++;
        }
        if(i==m)
        {
            while(j<n)
            {
                printf("%d\n",b[j]);
                j++;
            }
            break;
        }
        if(j==n)
        {
            while(i<m)
            {
                printf("%d\n",a[i]);
                i++;
            }
            break;
        }
    }
    return 0;
}
