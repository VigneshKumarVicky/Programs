//Given array of numbers,print all the leaders.(Leaders are the elements which are greater than all the right most elements)
//By default last element is a leader.

/*
    Input   : 12 3 2 5 6 4 1
    Ouput   : 12 6 4 1
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,a[9999],i,j,c=0;
    char ch;
    while(ch!='\n')
    {
        scanf("%d",&a[n]);
        scanf("%c",&ch);
        n++;
    }
    for(i=0;i<n-1;i++)
    {
        c=0;
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
                c++;
        }
        if(c==j-i-1)
        {
            printf("%d ",a[i]);
        }
    }
    printf("%d",a[n-1]);
    return 0;
}
