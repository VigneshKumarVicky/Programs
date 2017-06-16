//Given a character followed by number, expand the occurence of character upto the number.
/*
      Input   : a4k10
      Output  : aaaakkkkkkkkkk
*/

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,l,s=0;
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]>=48 && str[i]<=57)
            s=(s*10)+(str[i]-48);
        else
        {
            for(j=0;j<s;j++)
                printf("%c",str[i]);
            s=0;
        }
    }
    return 0;
}
