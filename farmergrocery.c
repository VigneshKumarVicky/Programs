/*
Farmers & Grocery Shop Owner Agreement
A group of farmers in a village and a grocery shop owner enter into an agreement containing the following conditions.
- The price of the item sold by farmers will be monitored over a period of N days.
- The grocery shop owner will pay the price P which was higher than or equal to the previous days pricing for the maximum consecutive days.
- If there are multiple such values for P, then the first occurring price will be considered for P.
The program must accept the input values and print the price P which is to be paid by the grocery shop owner to the farmers.

Input Format:
First line contains N.
Second line contains N positive integer values separated by a space.

Output Format:
First line contains the price to be paid.

Boundary Conditions:
3 <= N <= 1000000  

Input   : 7
          90 70 60 72 65 75 85
Output  : 85

Explanation:
90 was the highest price for 1 day (As there was no previous pricing)
70 was the highest price for just 1 day (As the previous day pricing 90 is more than 70).
60 was the highest price for just 1 day (As the previous day pricing 70 is more than 60 ).
72 was the highest price for 3 days (72 is higher than 70, 60).
Similarly 65 was the highest price for 1 day.
75 was the highest price for 5 days and
85 was the highest price for 6 days.
Hence 85 is printed as the output.


Input   : 7
          100 80 90 95 90 82 93
Output  : 95

Explanation:
Though 95 and 93 both were the highest price for 3 days, the first occurring price which is 95 is printed as the output.

*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int *a,n,i,j,c=1,max,maxi,l=1;
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    max=*(a+0);
    for(i=1;i<n;i++)
    {
        c=0;
        if(*(a+i)>max)
        {
            max=*(a+i);
            j=i-1;
            while(*(a+i)>*(a+j) && j!=-1)
            {
                c++;
                j--;
            }
        }
        else
            max=*(a+i);
        if(c>l)
        {
            l=c;
            maxi=*(a+i);
        }
    }
    printf("%d",maxi);
}
