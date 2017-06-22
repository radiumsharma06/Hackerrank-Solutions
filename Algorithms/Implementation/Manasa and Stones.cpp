#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    int t,n,a,b,i,j;
	scanf("%d",&t);
	int x[t],y[1000]={0,};
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		scanf("%d",&a);
		scanf("%d",&b);
		for(j=0;j<n;j++)
		{
			if(a==b)
			{
             printf("%d",a*(n-1));
             break;
			}
			else if(a>b)
			{
				y[j]=b*(n-1-j)+a*j;
			}
			else
			y[j]=a*(n-1-j)+b*j;
			printf("%d\t",y[j]);
			
		}
		printf("\n");
	} 
    return 0;
}
