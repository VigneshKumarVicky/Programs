//Given a string of numbers,find the triplet of numbers that sums to 0

/*
    Inout   : 1 3 -1 -2 -1 1
    Output  : -1 -1 2
              -2 -1 3
              -2 1 1
*/              

#include<stdio.h>
#include <stdlib.h>
int l=0,s[100000];
void sort(int s[])
{
    int i,j,t;
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-1-i;j++)
        {
            if(s[j]>s[j+1])            
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
    }
}
int main()
{
    char ch;
    int i,right,left,a,c=0;
    while(ch!='\n')
    {
        scanf("%d%c",&s[l++],&ch);
    }
    sort(s);
    for(i=0;i<l-2;i++)
    {
        left=i+1;
        right=l-1;
        a=s[i];
        while(left<right)
        {
            if(a+s[left]+s[right]==0)
            {
                printf("%d %d %d\n",a,s[left],s[right]);
                c=1;
                left++;
                right--;
            }
            else if(a+s[left]+s[right]<0)
                left++;
            else
                right--;
        }
    }
    if(c==0)
        printf("None");
    return 0;

}
