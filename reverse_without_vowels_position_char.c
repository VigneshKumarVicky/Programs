//Given a string identify the vowels position, reverse it and don't print the characters at the vowels position of initial string.
/*
    Input   : environment 
    Output  : nenrine
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    int i,l;
    scanf("%s",str);
    l=strlen(str);
    for(i=0;i<l;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            continue;
        else
            printf("%c",str[l-i-1]);
    }

}
