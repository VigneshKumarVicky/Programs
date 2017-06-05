//Given a number,find the next and previous prime number and find the difference.If number is prime number print 0.

/*
    Input   : 22
    Output  : 4   //23-19
*/

#include<stdio.h>
#include <stdlib.h>
int isprime(int n)
{
    int i,f=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    if(f==0)
        return 1;
}
int main()
{
    int n,next,previous,i;
    scanf("%d",&n);
    if(isprime(n)==1)
    {
        printf("0");
        return 1;
    }
    else
    {
        for(i=n+1;i>n;i++)
        {
            if(isprime(i)==1)
            {
                next=i;
                break;
            }
        }
        for(i=n-1;i<n;i--)
        {
            if(isprime(i)==1)
            {
                previous=i;
                break;
            }
        }
    }
    printf("%d",next-previous);
    return 0;
}
