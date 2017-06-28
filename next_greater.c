//Given a array of integers,print the next greater integer present among the right most elements. If no number is greater then print -1.

/*
    Input   : 5 12 4 1 3
    Output  : 12 -1 -1 3 -1
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[10000],c=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[j]>a[i])
            {
                printf("%d ",a[j]);
                break;
            }
            else
                c++;
        }
        if(c==n-i-1)
            printf("-1 ");
    }
    return 0;
}
