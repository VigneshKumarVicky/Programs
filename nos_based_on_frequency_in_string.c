//Given a string of integers, print them based on the order of frequency of occurrence.

/*
    Input   : 34215654333
    Output  : 33334455126
*/

#include<stdio.h>
#include <stdlib.h>
void print(int n,int f)
{
    int i;
    for(i=0;i<f;i++)
        printf("%d",n);
}
int main()
{
    int i,j,l,dig[10]={0},k=0,a[30],b[30],t;
    char str[30];
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        dig[str[i]-'0']++;
    }
    for(i=0;i<10;i++)
    {
        if(dig[i]!=0)    
        {
            a[k]=dig[i];
            b[k]=i;
            k++;
        }
    }
    for(i=0;i<k-1;i++)
    {
        for(j=0;j<k-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                
                t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
                
            }
        }
    }
    for(i=0;i<k;i++)
    {
        print(b[i],a[i]);
    }
    return 0;
}
