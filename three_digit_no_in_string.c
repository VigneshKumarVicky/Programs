//Given a string, print the three digit numbers in the string.If not then print -1.

/*
    Input   : asdfghj234gvhbjnkm56g11bnm861gvhbn111
    Output  : 234 861 111
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
    char dig[100],str[99999];
    int i,s=0,l,k=0,c=0,len;
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<=l;i++)
    {
        
        if(str[i]>=48 && str[i]<=57)  
        {
            dig[k]=str[i];
            k++;
        }
        else if(((str[i]>='a' && str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))|| str[i]=='\0')
        {
            dig[k]='\0';
            len=strlen(dig);
            if(len==3)
            {
                printf("%s ",dig);
                c++;
            }
            k=0;
        }
    }
    if(c==0)
        printf("-1");
    return 0;
}
