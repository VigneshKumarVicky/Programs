//Given a N integers, print how many numbers are duplicated. 

/*
    Input   : 1 2 1 2 3 4 4 5
    Output  : 3
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a[1000],b[1000]={0},n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    for(i=0;i<1000;i++)
    {
        if(b[i]>1)
            c++;
    }
    printf("%d",c);
    return 0;
}
