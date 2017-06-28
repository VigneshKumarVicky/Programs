//Given two strings,find the no. of words in first and second strings forms a anagram.

/*
    Input   : because of the edit rock
              tide and cork
    Output  : 2 (edit and tide, rock and cork)
*/

#include<stdio.h>
#include <stdlib.h>
int main()
{
    int l,l1=0,l2=0,i,i1,j,j1,k=0,k1=0,alpha1[26],alpha2[26],alpha3[26],c1=0,c2=0;
    char str1[100],str2[100],str3[100],str4[100];
    scanf("%[^\n]s",str1);
    getchar();
    scanf("%[^\n]s",str2);
    l1=strlen(str1);
    l2=strlen(str2);
    for(i=0;i<l1;i++)
    {
        k=0;
        for(i1=0;i1<26;i1++)
            alpha1[i1]=0;
        while(1)
        {
            str3[k]=str1[i];
            i++;
            k++;
            if(str1[i]==' ' || str1[i]=='\0')
                break;
        }
        str3[k]='\0';
        for(i1=0;i1<k;i1++)
        {
            if(alpha1[str3[i1]-'a']==0)
                alpha1[str3[i1]-'a']++;
        }
        for(j=0;j<l2;j++)
        {
            k1=0;
            c1=0;
            for(j1=0;j1<26;j1++)
                alpha3[j1]=alpha1[j1];
            for(j1=0;j1<26;j1++)
                alpha2[j1]=0;
            while(1)
            {
                str4[k1]=str2[j];
                j++;
                k1++;
                if(str2[j]==' ' || str2[j]=='\0')
                    break;
            }
            str4[k1]='\0';
            for(j1=0;j1<k1;j1++)
            {
                if(alpha2[str4[j1]-'a']==0)
                    alpha2[str4[j1]-'a']++;
            }
            for(l=0;l<26;l++)
            {
                if(alpha3[l]==1 && alpha2[l]==1)
                {
                    alpha3[l]--;
                    alpha2[l]--;
                }
            }
            for(l=0;l<26;l++)
            {
                if(alpha3[l]==0 && alpha2[l]==0)
                    c1++;
            }
            if(c1==26)
                c2++;
        }
    }
    printf("%d",c2);
    return 0;
}
