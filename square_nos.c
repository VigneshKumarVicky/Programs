//Given two positive integers, print the square numbers between them.

/*
    Input   : 3 25
    Output  : 4,9,16,25
*/

#include<stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    long int n1,n2,i,s,c=0;
    scanf("%ld%ld",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        s=sqrt(i);
        if(i==s*s)
        {
            if(c!=0)
                printf(",");
            printf("%ld",i);
            c++;
        }
    }
    return 0;
}
