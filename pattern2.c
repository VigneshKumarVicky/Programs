//Prints a pattern
Input    : VIGNESH
Output   : ******N      //Starts from middle character of odd length string
           *****NE
           ****NES
           ***NESH
           **NESHV
           *NESHVI
           NESHVIG
           
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[1001];
    int l,i,j,n,k,m=0;
    scanf("%s",&s);
    l=strlen(s);
    n=l/2;
    k=n+1;
    for(i=1;i<=l;i++)
    {
        for(j=l;j>0;j--)
        {
            if(j==i)
                printf("%c",s[n]);
            else if(j<i && s[k]!='\0')
            {
                printf("%c",s[k]);
                k++;
            }
            else if(j<i && s[k]=='\0')
            {
                printf("%c",s[m]);
                m++;
            }
            else
                printf("*");
        }
        m=0;
        k=n+1;
        printf("\n");
    }
    return 0;
}
