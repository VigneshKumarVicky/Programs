//Given the N no. of students, M students limit, starting time of class and the arrival time of students.
//Prints Yes to cancel the class if less than M students arrived on time
//Prints No to cancel the class if M or more than M students arrived on time.
/*
  Input   : 5 3
            10:10
            10:00 10:20 10:10 10:12 10:15
  Output  : Yes
*/

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int n,m,i,c,hour,min,hours,mins;
    char start[5],arrrial[5],*str,*str1;
    scanf("%d%d",&n,&m);
    scanf("%s",&start);
    c=n;	str=strtok(start,":");
    str1=strtok(NULL,":");
    hour=atoi(str);
    min=atoi(str1);
    for(i=0;i<n;i++)
    {
        scanf("%s",&arrrial);
        str=strtok(arrrial,":");
        str1=strtok(NULL,":");
        hours=atoi(str);
        mins=atoi(str1);
        if(hours>=hour && mins>min)
            c--;
    }
    if(c<m)
        printf("Yes");
    else
        printf("No");
    return 0;
}
