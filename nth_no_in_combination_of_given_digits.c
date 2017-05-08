//Finds the Nth number in the series of numbers that has only given two digits
/*
  Input   : 6   (Digit 1)
            9   (Digit 2)
            15  (Nth value)
  Output  : 6999              (15th number in the series 69 96 669 696 699 966 969 996 6669 6696 6699 6966 6969 6996 6999)
*/

#include<stdio.h>
#include <stdlib.h>
int d1,d2,count=0;
void combine(int n)
{
    int t,i,c1=0,c2=0,c3=0,n1=1;
    i=n;
    while(i!=0)
    {
        i=i/10;
        c1++;
    }
    i=n;
    while(i!=0)
    {
        t=i%10;
        i=i/10;
        if(t==d1 || t==d2)
            c2++;
        else
            break;
    }
    for(i=0;i<c1-1;i++)
    {
        n1=(n1*10)+1;
    }
    if(n%n1==0)
    {
        c2=0;
    }
    if(c1==c2)
    {
        count++;
    }
}
int main()
{
    int n,i,c=0,a[50];
    scanf("%d%d",&d1,&d2);
    scanf("%d",&n);
    for(i=10;i>9;i++)
    {
        combine(i);
        if(count==n)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
