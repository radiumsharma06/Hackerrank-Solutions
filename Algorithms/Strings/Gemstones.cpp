#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j,f,k,y=0,count;
    char s[100],c;
    int r[123]={0,};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	int t[123]={0,};
    	count=0;
    	scanf("%s",&s);
    	while(s[count]!='\0')
    	count++;
    	for(j=0;j<count;j++)
    	{
    	    f=0;
    		c=s[j];
    		if(t[c]!=-1)
    		{
    			t[c]=-1;
    			r[c]++; 
    		}
    	 
    	}
    }
    y=0;
    for(i=97;i<=122;i++)
    {
    	if(r[i]==n)
    	{	
    	y++;
        }
    }
    printf("%d",y);
    return 0;
}