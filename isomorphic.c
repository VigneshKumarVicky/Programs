//Given two strings, check whether they are isomorphic or not.

/*
    Input   : fall
              boss
    Output  : yes
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str1[1000],str2[1000];
    int alpha1[26]={0},alpha2[26]={0},i,l1,l2;
    scanf("%s",str1);
    scanf("%s",str2);
    l1=strlen(str1);
    l2=strlen(str2);
    if(l1!=l2)
    {
        printf("NO");
        return 0;
    }
    for(i=0;i<l2;i++)
    {
        if(alpha1[str1[i]-'a']==0)
        {
            if(alpha2[str2[i]-'a']==1)
            {
                printf("NO");
                return 0;
            }
            alpha2[str2[i]-'a']=1;
            alpha1[str1[i]-'a']=str2[i];
        }
        else if(alpha1[str1[i]-'a']!=str2[i])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
