//Given a N boxes with apples.Then print how many ways K apples can be taken by taking two boxes.

/*
    Input   : 6 6
              1 2 4 3 2 3
    Output  : 2 ((2,4) and (3,3))
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    long int n,i,j,k,m=0,l=0,o,count=0,a[99999],b[99999],c[99999];
    scanf("%ld%ld",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n && i!=j;j++)
        {
            if(a[i]==k)
            {
                l=0;
                for(o=0;o<m;o++)
                {
                    if(a[i]!=b[o] && c[o]!=0 && a[j]!=b[o])
                        l++;
                }
                if(l==m)
                {
                    b[m]=a[i];
                    c[m]=0;
                    m++;
                }
            }
            if(a[i]+a[j]==k)
            {
                l=0;
                for(o=0;o<m;o++)
                {
                    if(a[i]!=b[o] && a[i]!=c[o] && a[j]!=b[o] && a[j]!=c[o])
                        l++;
                }
                if(l==m)
                {
                    b[m]=a[i];
                    c[m]=a[j];
                    m++;
                }
            }
        }
    }
    printf("%ld",m);
    return 0;
}
