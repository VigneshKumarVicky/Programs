/*

Message  Encryption To  encrypt  messages  
Jil will first decide on the number of columns C to use. 
Then Jil will pad the message with letters chosen randomly so that they form a rectangular matrix.  
Finally Jil will write down the message navigating the rows from left to right and then from right to left.
The program must accept the encrypted message M as input.
Then extract and print the original message (along with any additional padding letters) from the encrypted one based on the value of C.

Boundary  Conditions  :
Length  of  M  is  from  4  to  200

Input  Format :
First line will contain the string value of the encrypted message M.
Second line will contain the integer value of the column used for the encryption.

Output  Format  :
First line will contain the string value of the original message (along with any additional padding letters)

Input   : midinadiazne
Output  : madeinindiaz
Explanation : m  i  d
              a  n  i
              d  i  a
              e  n  z
Here z is the padding letter. 
The navigating across the rows left to right and then from right to left and so on we come up with the encrypted message midinadiazne.

Input   : loaesfbnaiordilertenrdhdw
Output  : lionroaredandthebirdsflew
Explanation  :  l o a e s
                i a n b f
                o r d i l
                n e t r e
                r d h d w
Here  there  are  no  padding  letters. 
The navigating across the rows left to right and then from right to left we get loaesfbnaiordilertenrdhdw

*/

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char str[200],msg[10][20];
    int c,l,i,j,k=0;
    scanf("%s",&str);
    scanf("%d",&c);
    l=strlen(str);
    for(i=0;i<l/c;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<c;j++)
            {
                msg[i][j]=str[k];
                k++;
            }
        }
        else
        {
            for(j=c-1;j>=0;j--)
            {
                msg[i][j]=str[k];
                k++;
            }
        }
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<l/c;j++)
        {
            printf("%c",msg[j][i]);
        }
    }
    return 0;
}
