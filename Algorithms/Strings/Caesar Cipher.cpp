#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n,k,i,y;
scanf("%d",&n);
char c[n];
char t='z';
scanf("%s",c);
scanf("%d",&k);
y=k;
for(i=0;i<n;i++)
{
	k=y;
	if((c[i]>=65 && c[i]<=90) ||(c[i]>=97 && c[i]<=122))
	{
		while(k>0)
		{
		if(c[i]=='z')
		{
		c[i]='a';
		k--;
	    }
	    if(c[i]=='Z')
		{
		c[i]='A';
		k--;
	    }
        c[i]=c[i]+1;
        if(c[i]=='z'&& k!=1)
        {
        c[i]='a';
        k--;
        }
        if(c[i]=='Z'&& k!=1)
        {
        c[i]='A';
        k--;
        }
        k--;
        }
}
}
printf("%s",c);    
    return 0;
}
