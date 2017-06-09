/*
Smallest Substring - All Distinct Letters.
A string value S containing only alphabets (both lower and upper case) is passed as input to the program. 
The program must print the size of the smallest substring which contains all the distinct alphabets in the string S.

Input Format
First line contains S.

Output Format
First line contains the size of the smallest substring which contains all the distinct characters in the string S.

Boundary Conditions
Length of string S < 1000
Note  :a and A (lower and upper case letters are considered different).Hence the string aAaaA contains 2 distinct alphabets.

Input         : abcdfffccbbfeaad
Output        : 8
Explanation   : The smallest sub string that contains all the distinct letters is cbbfeaad whose length is 8.

Input         : klLDKFFKpPoOGAFSGxxkllhaJSHJAlqadyASFLHJASHFA
Output        : 32
Explanation   : The smallest sub string that contains all the distinct letters is LDKFFKpPoOGAFSGxxkllhaJSHJAlqady whose length is 32.

*/

#include<stdio.h>
#include <stdlib.h>
int check(char str[1000],char com[500],int l,int k,int n)
{
    int i,j,x=0,y=0,che[500];
    for(i=0;i<k;i++)
    {
        che[i]=0;
    }
    for(i=n;i<l;i++)
    {
        for(j=0;j<k;j++)
        {
            if(com[j]==str[i] && che[j]==0) 
            {
                che[j]=1;
                x++;
                if(x==k)
                {
                    y=1;
                    return i+1;
                }
            }
        }
    }
    if(y!=1)
        return 99999;
}
int main()
{
    char str[1000],com[500];
    int alpha1[26]={0},alpha2[26]={0},i,l,k=0,x,len;
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            alpha1[str[i]-'a']++;
        }
        if(str[i]>='A' && str[i]<='Z')
        {
            alpha2[str[i]-'A']++;
        }
    }
    for(i=0;i<26;i++)
    {
        if(alpha1[i]!=0)
        {
            com[k]=i+'a';
            k++;
        }
    }
    for(i=0;i<26;i++)
    {
        if(alpha2[i]!=0)
        {
            com[k]=i+'A';
            k++;
        }
    }
    len=l;
    for(i=0;i<l;i++)
    {
        x=check(str,com,l,k,i);
        x=x-i;
        if(x<len)
            len=x;
    }
    printf("%d",len);
    
    return 0;
}
