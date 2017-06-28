//Given N strings, remove the uncommom character among the other.

/*
    Input   : 3
              gaoanm
              ngoma
              namo
    Output  : ag
*/

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
void removechar(int alpha1[26],int alpha2[26],int n)
{
    int i,ch;
    for(i=0;i<26;i++)
    {
        if(alpha1[i]==1 && alpha2[i]==1)
        {
            alpha1[i]--;
            alpha2[i]--;
        }
    }
    if(n==2)
    {
        for(i=0;i<26;i++)
        {
            if(alpha1[i]==1)
                printf("%c",i+'a');
        }
    }
    for(i=0;i<26;i++)
    {
        if(alpha2[i]==1)
            printf("%c",i+'a');
    }
}
int main()
{
    int n,i,j,alpha1[26]={0},alpha2[26]={0},l1,l2;
    char str1[200],str2[200];
    scanf("%d",&n);
    scanf("%s",str1);
    l1=strlen(str1);
    for(j=2;j<=n;j++)
    {
        scanf("%s",str2);
        l2=strlen(str2);
        for(i=0;i<l1;i++)
        {
            if(alpha1[str1[i]-'a']==0)
                alpha1[str1[i]-'a']++;
        }
        for(i=0;i<l2;i++)
        {
            if(alpha2[str2[i]-'a']==0)
                alpha2[str2[i]-'a']++;
        }
        removechar(alpha1,alpha2,j);
        strcpy(str1,str2);
    }
    return 0;
}
