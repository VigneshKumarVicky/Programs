//Finds the No. of Distinct elements in two arrays
Input   : 3 4
          1 4 8     //First Array
          4 7 9 1   //Second Array       
Output  : 3         //No. of Distinct elements

#include<stdio.h>
#include <stdlib.h>
int distinct(int x[50],int y[50],int n,int n1)
{
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(x[i]==y[j])
            {
                c++;
                break;
            }
        }
    }
    return n-c;
}
int main()
{
    int n,n1,i,a[50],b[50],x,y;
    scanf("%d%d",&n,&n1);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n1;i++)
    {
        scanf("%d",&b[i]);
    }
    x=distinct(a,b,n,n1);
    y=distinct(b,a,n1,n);
    printf("%d",x+y);
    return 0;

}
