#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,i,j,k,l,c,count,r,y,n;
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++)
	{
		char s[100005]="\0";
		char s1[100005]="\0";
		scanf("%s",&s);
		count=0;
		while(s[count]!='\0')
		count++;
		int flag=0;
		y=0;
		for(j=0;j<count;j++)
		{
			if(s[j]!=s[count-1-j])
			break;
			else
			y++;
		}
		if(y==count)
		flag=-1;
		if(flag==0)
		{
			
		for(j=0;j<count;j++)
		{	
	     	char f;
		  	 f=s[j];
		  if(f!=(count/2)&&s[count-j-1]!=f)
		  {
		  	
		  	for(k=0;k<count;k++)
		  s1[k]=s[k];
		  for(k=j;k<count-1;k++)
		  s1[k]=s1[k+1];
		  n=count-1;
		  int ct=0;
		  for(l=0;l<n;l++)
		  {
			if(s1[l]!=s1[n-1-l])
			{
				j=count-j-2;
			break;
		    }
			else
			ct++;
	    	}
		if(ct==n)
		{
		a[i]=j;
		flag=1;
		break;
	    }
		  }
		  
	    }
	    if(flag==1)
	    {
	    	a[i]=j;
	    }
      }
	   if(flag==-1)
	   a[i]=-1;
	   } 
	for(i=0;i<t;i++)
	printf("%d\n",a[i]);  
    return 0;
}