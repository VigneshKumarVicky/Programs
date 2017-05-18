//Finds the number of trailing zeros in the factorial of a given number.
/*
      Input   : 7 
      Output  : 1
      
      Input   : 100 
      Output  : 24
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,c=0,i=5;
    scanf("%d",&n);
    while(n/i>=1)
    {
        c=c+n/i;
        i=i*5;
        
    }
    printf("%d",c);
    return 0;

}
