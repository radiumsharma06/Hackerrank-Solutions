#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a[10001],b[10001];
    scanf("%s %s",&a,&b);
    int c1=0,c2=0;
    while(a[c1]!='\0')
    c1++;
    while(b[c2]!='\0')
    c2++;
    int i,j,k,c=0,d1,d2,d=0;
    char t[10001],y;
    int r[123]={0,};
    for(i=0;i<c1;i++)
    {
    	y=a[i];
    	d1=1;d2=0;
    	if(r[y]!=-1)
    	{
    		r[y]=-1;
    	for(k=i+1;k<c1;k++)
    	{
    		if(a[i]==a[k])
    		{
    			d1++;
    		}
    	}
    	for(j=0;j<c2;j++)
    	{
    		if(a[i]==b[j])
    		{
    		  d2++;	
    		}
    	}
    	if(d1==d2)
    	{
    		while(d2--)
    		d++;
    	}
    	
    	else if(d2>0)
    	{
    		d1=(d1>d2?d2:d1);
    		while(d1--)
    		d++;
    	}
        }
    	
    }
    printf("%d",(c1+c2-(2*d)));
    return 0;
}
