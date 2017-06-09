/*
Given two numbers to the base 10 and the specified base. The program should print the sum of given numbers in the specified base.

Input     : 2 
            111 11
Output    : 10
*/

#include<stdio.h>
#include <stdlib.h>
int power(int n,int b)
{
    int i,p=1;
    if(b==0)
        return 1;
    else
        return n*power(n,b-1);
}
int decimal(int a,int n)
{
    int s=0,b=0,rem;
    while(a!=0)
    {
        rem=a%10;
        a=a/10;
        s=s+(rem*power(n,b));
        b++;
    }
    return s;
}
int main()
{
    int n,x,y;
    scanf("%d%d%d",&n,&x,&y);
    printf("%d",decimal(x,n)+decimal(y,n));
    return 0;
}
