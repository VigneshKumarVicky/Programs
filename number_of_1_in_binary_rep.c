//Given a number,it prints the no. of 1's in its binary representstion

/*
      Input   : 7
      Output  : 3

      Input   : 121
      Output  : 5
/*

#include<stdio.h>
#include <stdlib.h>

int main()
{
    long int n;
    int rem,c=0;
    scanf("%ld",&n);
    while(n!=0)
    {
        rem=n%2;
        n=n/2;
        if(rem==1)
            c++;
    }
    printf("%d",c);
    return 0;

}
