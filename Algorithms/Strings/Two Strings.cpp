#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,i,j,k,count1,count2;
    scanf("%d",&t);
    char *ch[t];
    for(i=0;i<t;i++)
    {
    	int o[123]={0,};
        char s1[100001]="\0";
        char s2[100001]="\0";
        scanf("%s",&s1);
        scanf("%s",&s2);
        count1=count2=0;
        while(s1[count1]!='\0')
        count1++;
        while(s2[count2]!='\0')
        count2++;
        char c='n',f;
        for(j=0;j<count1;j++)
        {
        	f=s1[j];
        	if(o[f]!=-1)
        	{
        		o[f]=-1;
        	for(k=0;k<count2;k++)
        	{
        		if(s1[j]==s2[k])
        		{
        			c='y';
        			break;
        		}
        	}
        	if(c=='y')
        	break;
        }
      }
        if(c=='y')
        ch[i]="YES";
        else
        ch[i]="NO";
    
    }
    for(i=0;i<t;i++)
    printf("%s\n",ch[i]);
    return 0;
}