//Finds the sum of three digit numbers embedded in the string
Input   : Ihave323apples12mangoesand121oranges
Output  : 444           //Sum of 323 and 121

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int digitcount(int n)
{
    int c=0;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    return c;
}
int ischar(char a)
{
    if((a>=65 && a<=90) || (a>=97 && a<=122))
        return 1;
    else
        return 0;
}
int main()
{
    char str[200],num[10];
    int c,l,i,k=0,s=0,t,d;
    scanf("%s",&str);
    l=strlen(str);
    for(i=0;i<l;)
    {
        c=ischar(str[i]);
        if(c==1)
        {
            i++;
            continue;
        }
        else
        {
            while(c!=1)
            {
                num[k]=str[i];
                k++;
                i++;
                c=ischar(str[i]);
            }
            num[k]='\0';
            t=atoi(num);
            k=0;
            d=digitcount(t);
            if(d==3)
            {
                s=s+t;
            }
        }
    }
    printf("%d",s);
    return 0;
}
