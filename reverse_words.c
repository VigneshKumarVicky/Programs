//Given a sentence, reverse the words.
/*
    Input   : Today is saturday
    Output  : saturday is Today
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[50][100],ch;
    int n=0,i;
    while(ch!='\n')
    {
        scanf("%s",str[n]);
        scanf("%c",&ch);
        n++;
    }
    for(i=n;i>=0;i--)
        printf("%s ",str[i]);
    return 0;

}
