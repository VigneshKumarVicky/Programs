//Given two strings, print the no. of common characters among them.

/*
    Input : loss
            sums
    Ouput : 2
*/

#include<stdio.h>
#include <stdlib.h>
int min(x,y)
{
    if(x<y)
        return x;
    else
        return y;
}
int main()
{
    char str1[100],str2[100];
    int alpha1[26]={0},alpha2[26]={0},i,l1,l2,c=0;
    scanf("%s",str1);
    scanf("%s",str2);
    l1=strlen(str1);
    l2=strlen(str2);
    for(i=0;i<l1;i++)
        alpha1[str1[i]-'a']++;
    for(i=0;i<l2;i++)
        alpha2[str2[i]-'a']++;
    for(i=0;i<26;i++)
    {
        if(alpha1[i]!=0 && alpha2[i]!=0)
        {
            c=c+min(alpha1[i],alpha2[i]);
        }
    }
    printf("%d",c);
    return 0;
}
