//Finds X and Y Position based on direction
Input   : 2 2
          S4
Output  : 2 -2
Input   : 2 2
          S4 N3 E9 W2
Output  : 9 1


#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    static int x,y;
    int n;
    char d[2],c,ch,ch1;
    scanf("%d%d",&x,&y);
    scanf("%c",&ch1);
	  while(c!='\n')
    {
        scanf("%c",&ch);
        scanf("%s",&d);
        scanf("%c",&c);
        n=atoi(d);
        if(ch=='E')
        {
            x=x+n;
        }
        else if(ch=='W')
        {
            x=x-n;
        }
        else if(ch=='S')
        {
            y=y-n;
        }
        else if(ch=='N')
        {
            y=y+n;
        }
    }
    printf("%d %d",x,y);
    return 0;
    

}
