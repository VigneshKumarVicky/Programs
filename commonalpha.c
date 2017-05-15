//Prints the common alphabets in the strings in ascending order.
/*
  Input   : 5
            hello
            halloween
            hell
            lehar
            elephant
            
  Output  : ehl
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,l1,l2,l3,i,j,k=0,x,y=0,c=0;
    char str[20],str1[20],str2[20],str3[10],ch;
    scanf("%d",&n);
    scanf("%s",&str);
    scanf("%s",&str1);
    l1=strlen(str);
    l2=strlen(str1);
    for(i=0;i<l1;i++)
    {
        for(x=0;x<k;x++)
        {
            if(str[i]==str3[x])
                c=1;
        }
        if(c==0)
        {
            for(j=0;j<l2;j++)
            {
                if(str[i]==str1[j])    
                {
                    str3[k]=str[i];
                    k++;
                    break;
                }
            }
        }
        c=0;
    }
    str3[k]='\0';
    for(i=2;i<n;i++)
    {
       scanf("%s",&str2);
       l3=strlen(str2);
       for(j=0;j<k;j++)
       {
           for(x=0;x<l3;x++)
           {
               if(str3[j]==str2[x])
               {
                   str3[y]=str3[j];
                   y++;
                   break;
               }
           }
       }
       str3[y]='\0';
       k=y;
       y=0;
    }
    l1=strlen(str3);
    for(i=0;i<l1-1;i++)
    {
        for(j=i+1;j<l1;j++)
        {
           if(str3[i]>str3[j]) 
           {
               ch=str3[i];
               str3[i]=str3[j];
               str3[j]=ch;
           }
        }
    }
    if(str3[0]=='\0')
        printf("-1");
    else
        printf("%s",str3);
    return 0;
    
}
