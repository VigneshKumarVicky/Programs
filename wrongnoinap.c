//Finding Wrong No. in th Arithmetic Series
Input   : 2 7 8 11 14 17
Output  : 7
Input   : 2 5 8 11 14 18
Output  : 18
Input   : 1 5 8 11 14 17
Output  : 1


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int *a,n=0,i=0,j,t,d,d1,d2,d3,l=-1;
    char c;
    while(c!='\n')
    {
        scanf("%d",&a[i]);
        scanf("%c",&c);
        n++;
        i++;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    d=a[1]-a[0];
    d2=a[n-1]-a[n-2];
    d3=a[n-2]-a[n-3];
    for(i=1;i<n-1;i++)
    {
        d1=a[i+1]-a[i];
        if(d==d1)
        {
            continue;
        }
        else
        {
            if(d1==d2)
            {
                if(d2==d3)
                {
                    l=a[0];
                    break;    
                }
                else
                {
                    l=a[n-1];
                    break;
                }
            }
            else
            {
                l=a[i+1];
                break;
            }
        }
        
    }
    printf("%d",l);
    return 0;
}
