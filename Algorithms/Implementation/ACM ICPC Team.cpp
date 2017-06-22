#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,m,i,j,c,max=0,d,f=-1;
	scanf("%d %d",&n,&m); 
	int a[n][m],b[n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%1d",&a[i][j]);
		}
	}
	for(i=0;i<n-1;i++)
	{
		c=i+1;
		while(c<n)
		{
			d=0;
		for(j=0;j<m;j++)
		{
			if(a[i][j]==1||a[c][j]==1)
			{
				d++;
			}
			
		}
		if(d>max)
		{
		max=d;
		f=1;
	    }
	    else if(d==max)
	    f++;
		c++;
	}
}

	printf("%d\n%d",max,f);
    return 0;
}
