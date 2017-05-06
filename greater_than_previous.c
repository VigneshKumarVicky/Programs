//Prints the No. only if it is greater than previous numbers
/*        Input   : 7
                    1 3 2 7 14 12 17
          Output  : 1 3 7 14 17
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d ",a[0]);
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j])
                c++;
        }
        if(c==i)
            printf("%d ",a[i]);
        c=0;
    }
    return 0;
}
