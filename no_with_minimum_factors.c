//Given a N integers, print a number with minimum no. of factors.If two or more have same no. of factors then greatest number is printed.

/*
    Input   : 15 10 20 30
    Output  : 15
*/

#include<stdio.h>
#include <stdlib.h>
int min(int a[1000],int n)
{
    int m=9999,i,p;
    for(i=0;i<n;i++)
    {
        if(a[i]<m)
        {
            m=a[i];
            p=i;
        }
    }
    return p;
}
int max(int c[100],int n)
{
    int i,m=0;
    for(i=0;i<n;i++)
    {
        if(c[i]>m)
            m=c[i];
    }
    return m;
}
int factors(int a,int m)
{
    int i,c=0;
    for(i=1;i<=m;i++)
    {
        if(a%i==0)
            c++;
    }
    return c;
}
int main()
{
    int n,a[1000],b[1000],c[100],i,j,t,k=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
        {
            printf("1");
            return 0;
        }
    }
    m=a[min(a,n)];
    for(i=0;i<n;i++)
    {
        b[i]=factors(a[i],m);
    }
    t=min(b,n);
    for(i=0;i<n;i++)
    {
        if(b[t]==b[i])
        {
            c[k]=a[i];
            k++;
        }
    }
    printf("%d",max(c,k));
    return 0;
}
