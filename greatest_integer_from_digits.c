//Given a integer,print the greatest integer that can be formed from the digits.

/*
    Input   : 165
    Output  : 651
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    long int n,a[9999999],rem,i,j,l=0,t,s=0;
    scanf("%ld",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        a[l]=rem;
        l++;
    }
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<l;i++)
        s=(s*10)+a[i];
    printf("%ld",s);
    return 0;
}
