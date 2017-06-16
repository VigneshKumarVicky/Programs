//Encryption of message by shifting the character.
//Given a string and x value to shift alphabets and y value to numbers
/*
      Input   : hello world 23z
                2
                6
      Output  : jgnnq yqmnf 29b
*/

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char str[100];
    int x,y,i,l;
    scanf("%[^\n]s",str);
    scanf("%d%d",&x,&y);
    l=strlen(str);
    for(i=0;i<l-1;i++)
    {
        if(str[i]==32)
            printf(" ");
        else if(str[i]>47 && str[i]<58)
            printf("%d",str[i]+y-'0');
        else
        {
            if(str[i]+x>122)
                printf("%c",str[i]+x-26);
            else
                printf("%c",str[i]+x);
        }
    }
    return 0;
}
