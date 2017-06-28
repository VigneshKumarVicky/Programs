//Given an integer, print the no. of steps needed to form Collatz Sequence.
//Collatz Sequence :From N, build the sequence of values by the following rules  if N is even then Nnext N/2 else Nnext (3*N)+1

/*
    Input   : 15
    Output  : 18  (15 46 23 70 35 106 53 160 80 40 20 10 5 16 8 4 2 1)
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    long int n,c=0;
    scanf("%ld",&n);
    while(n!=1)
    {
        if(n%2==0)
            n=n/2;
        else
            n=(3*n)+1;
        c++;
    }
    printf("%ld",c);
    return 0;
}
