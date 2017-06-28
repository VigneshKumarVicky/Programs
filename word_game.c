//Given  N strings, a string from those combination and the position.
//Arrange them such a way that last char of current string wiil be the first character of next string.
//Print the pth string among the arrangment.

/*  
    Input   : road plot temp tiger divide 
              temp 3
    Output  : tiger (temp->plot->tiger->road->divide)
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=0,p,c=1;
    char str[26][100],str1[100],ch;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    scanf("%d",&p);
    scanf("%s",str1);
    while(1)
    {
        ch=str1[strlen(str1)-1];
        for(i=0;i<n;i++)
        {
            if(str[i][0]==ch)
            {
                c++;
                strcpy(str1,str[i]);
                break;
            }
        }
        if(c==p)
        {
            printf("%s",str[i]);
            break;
        }
            
    }
    return 0;
}
