#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,i,j,count,y,flag,ct;
	scanf("%d",&t);
	char s[10001];
	int a[t];
	for(i=0;i<t;i++)
	{
		scanf("%s",&s);
		count=0;
		y=0;
		flag=0;
		while(s[count]!='\0')
		count++;
		for(j=0;j<count;j++)
		{
			if(s[j]!=s[count-j-1])
			break;
			else
			y++;
		}
		if(y==count)
		flag=1;
		if(flag==0)
		{
			ct=0;
			for(j=0;j<count;j++)
			{
				if(s[j]!='a')
				{
					
					while(s[j]!=s[count-1-j])
					{
					  if(s[j]>s[count-j-1])
                          s[j]--;
                        else
                            s[count-j-1]--;
						ct++;
					}
				}
			}
		}
		if(flag==1)
		a[i]=0;
		if(flag==0)
		a[i]=ct;
	}
	for(i=0;i<t;i++)
	printf("%d\n",a[i]);    
    return 0;
}
