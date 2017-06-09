/*
Longest sub-string with N unique characters
The program must find the length L of the longest sub-string with N unique characters in a given string value S.

Input Format 
The first line will contain the string value S.
The second line will contain the number of unique characters N.

Boundary Conditions   
3 < S < 200
0 < N < 10

Output Format   
Length L of the sub-string longest sub-string with N unique characters.

Input       : abcdcdabcdef
              2
Output      : 4
Explanation : The longest possible substring with 2 unique characters in abcdcdabcdef is cdcd whose length is 4.

Input       : manager
              3
Output      : 4
Explanation : The longest possible substring with 3 unique characters in manager is either mana or anag whose length is 4.

Input       : dddddddddddd
              1
Output      : 12
Explanation : The longest possible substring with 1 unique character in dddddddddddd is dddddddddddd itself which is 12.
*/

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int substring(char str[200],int alpha[256],int l,int n)
{
    int u=0,i,j,k,alpha1[256]={0},max=0,c=0;
    for(i=0;i<l;i++)
    {
        for(k=0;k<256;k++)
            alpha1[k]=alpha[k];
        j=i;
        while(u<=n && j<l)
        {
            if(alpha1[str[j]]==1)
            {
                alpha1[str[j]]--;;
                u++;
            }
            if(u==n+1)
                break;
            c++;
            j++;
        }
        u=0;
        if((j-i)>max)
            max=j-i;
        c=0;
    }
    return max;
}
int main()
{
    char str[200];
    int n,alpha[256]={0},i,l;
    scanf("%s",str);
    scanf("%d",&n);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(alpha[str[i]]==0)
            alpha[str[i]]++;
    }
    printf("%d",substring(str,alpha,l,n));
    return 0;
}
