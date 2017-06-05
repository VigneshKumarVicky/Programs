/*

Minimum Distance Between Words [AMAZON]

A string S is passed as the input. Two words W1 and W2 which are present in the string S are also passed as the input. The program must find the minimum distance D between W1 and W2 in S (in forward or reverse order) and print D as the output.

Input Format:
The first line will contain S.
The second line will contain W1.
The third line will contain W2.

Output Format:
The first line will contain D - the minimum distance between W1 and W2 in S.

Boundary Conditions:
Length of S is from 5 to 200.

Input   : the brown quick frog quick the
          the
          quick
Output  : 1

Explanation:
quick and the are adjacent as the last two words. Hence distance between them is 1.

Input   : the quick the brown quick brown the frog
          quick
          frog
Output  : 3

*/

#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[80][20],ch;
    int w=0,i=0,p1=0,p2=0,l,min;
    while(1)
    {
        scanf("%s",str[i]);
        scanf("%c",&ch);
        w++;
        i++;
        if(ch=='\n')
            break;
    }
    min=w;
    for(i=0;i<w-2;i++)
    {
        if(strcmp(str[i],str[w-2])==0)
            p1=i+1;
        if(strcmp(str[i+1],str[w-1])==0 && i+1!=w-3)
            p2=i+2;
        if(p1!=0 && p2!=0 && p1!=p2)
        {
            l=abs(p1-p2);
            if(l<min)
                min=l;
        }
    }
    printf("%d",min);
    return 0;
}
