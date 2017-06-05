//Given a string of odd length. Prints a diagonal pattern of strings with charaters

/*
     Input    : VICKY
     Output   : V     Y
                  I  K
                   C
                  I  K
                 V     Y                 
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[51];
    int i,j,l;
    scanf("%s",str);
    l=strlen(str);
    printf("\n");
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            if(i==j || j==l-i-1)
                printf("%c",str[j]);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
