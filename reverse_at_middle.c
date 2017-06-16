//Given a string, keep first and last character as it is and reverse the middle characters.
/*
    Input   : vigneshkumar
    Output  : vamukhsengir
*/

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
void reverse(char str[1000],int l)
{
    int i,j,k=1;
    char b[l];
    b[0]=str[0];
    b[l-1]=str[l-1];
    for(i=l-2;i>0;i--)
    {
        b[k]=str[i];
        k++;
    }
    b[k+1]='\0';
    printf("%s\n",b);
}
int main()
{
    int n,i,l;
    char str[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str);
        l=strlen(str);
        reverse(str,l);
    }
    return 0;
}
