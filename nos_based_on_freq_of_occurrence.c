//Given a array of numbers.Print them based on the order of their frequency of occurrence.

/*
    Input   : 1 3 4 5 5 1 1 2 4
    Output  : 1 4 5 2 3
    
    Input   : 11 11 11 11 11
    Output  : 11
    
*/

#include<stdio.h>
#include <stdlib.h>
int max(int a[1000],int l)
{
    int m=0,i,in;
    for(i=0;i<l;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
            in=i;
        }
    }
    return in;
}
int main()
{
    int n,a[1000],b[1000],c[1000],k=0,i,j,t,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
                break;
        }
        if(i==j)
        {
            b[k]=a[i];
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
                count++;
        }
        c[i]=count;
        count=0;
    }    
    for(i=0;i<k;i++)
    {
        t=max(c,k);
        printf("%d ",b[t]);
        c[t]=0;
    }
    return 0;
}
