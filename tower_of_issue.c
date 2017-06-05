/*

Tower Line of Sight Issue

Four towers A B C D will be erected.
Tower A wil communicate with C and Tower B wil communicate with D
Line of sight issue can occur under the following conditions
-When tower B or D is in the straight line connecting A and C
-When tower A or C is in the straight line connecting B and D
The program must accept the co-ordinates of all four towers and print yes or no depending on whether Line of sight issue will occur or not.

Input Format  :
The first line will contain X and Y co-ordinates of tower A separated by a space.
The second line will contain X and Y co-ordinates of tower B separated by a space.
The third line will contain X and Y co-ordinates of tower C separated by a space.
The fourth line will contain X and Y co-ordinates of tower D separated by a space

Output Format :
The first line will contain yes or no (smaller case)

Boundary Conditions :
The value of the co-ordinates will be from -500 to 500.

Input   : 00 0-2 20 02
Output  : yes

Input   : 00 0-2 20 0-5
Output  : no

*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int xa,xb,xc,xd,ya,yb,yc,yd,f1=0,f2=0;
    scanf("%d%d%d%d",&xa,&ya,&xb,&yb);
    scanf("%d%d%d%d",&xc,&yc,&xd,&yd);
    if((((xb<=xa&&xb<=xc)||(xb>=xa&&xb>=xc))&&((yb<=ya&&yb<=yc)||(yb>=ya&&yb>=yc))) && (((xd<=xa&&xd<=xc)||(xd>=xa&&xd>=xc))&&((yd<=ya&&yd<=yc)||(yd>=ya&&yd>=yc))))
    {
        f1=1;
    }
    if((((xa<=xb&xa<=xd)||(xa>=xb&&xa>=xd))&&((ya<=yb&&ya<=yd)||(ya>=yb&&ya>=yd))) && (((xc<=xb&xc<=xd)||(xc>=xb&&xc>=xd))&&((yc<=yb&&yb<=yd)||(yc>=yb&&yc>=yd))))
    {
        f2=1;
    }
    if(f1==1 && f2==1)
        printf("no");
    else
        printf("yes");
    return 0;
}
