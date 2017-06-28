//Given a string with shorthand representation of expanding a character.Based on no. of occurrence character has to be expanded.

/*
    Input   : a5b3c1
    Output  : aaaaabbbc
    
    Input   : abc2
    Output  : aabbcc
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[20],str1[20];
    int i,j,m,l,k=0,s=0;
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(isdigit(str[i])!=1)
        {
            while(isdigit(str[i])!=1)
            {
                str1[k]=str[i];
                i++;
                k++;
            }
            str1[k]='\0';
        }
        if(isdigit(str[i])==1)
        {
            s=(s*10)+str[i]-'0';
            if(isdigit(str[i+1])!=1 || str[i+1]=='\0')
            {
                for(m=0;m<k;m++)
                {
                    for(j=0;j<s;j++)
                        printf("%c",str1[m]);
                }
                s=0;
                k=0;
            }
        }
    }
    return 0;
}
