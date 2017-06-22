#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,m,i,j;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&m);
	int b[m];
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	int x;
	unsigned long long int o[1000010]={0,};
	unsigned long long int c[1000010];
	int k=0;
	for(i=0;i<m;i++)
	{
		x=b[i];
		if(o[x]!=-1)
		{
			int r1=1,r2=0;
			o[x]=-1;
			for(j=i+1;j<m;j++)
			{
				if(x==b[j])
				r1++;
			}
			for(j=0;j<n;j++)
			{
				if(x==a[j])
				r2++;
			}
			if(r1!=r2)
			{
			 c[k++]=x; 
			}
		    
			
		}
	}
	int temp;
	for(j=0;j<k-1;j++)
	{
		for(i=j+1;i<k;i++)
		{
			if(c[i]<c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
		
	}
	for(j=0;j<k;j++)
	printf("%llu ",c[j]);
	
	    
    return 0;
}
