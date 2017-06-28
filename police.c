//Given the position of police1, police2 and a thief in a X axis. Find who will catch the thief,police1 or police2 or both

/*
  Input   : 3
            3 6 5
            2 4 6
            2 3 5
  Output  : Police2
            Both
            Police1
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,p1,p2,t,d1,d2,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&p1,&p2,&t);
        d1=abs(p1-t);
        d2=abs(p2-t);
        if(d1<d2)
            printf("Police1\n");
        else if(d2<d1)
            printf("Police2\n");
        else
            printf("Both\n");
    }
    return 0;
}
