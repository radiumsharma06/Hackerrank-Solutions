#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
  
    int n,t,i,j,a,b,min;
    scanf("%d %d",&n,&t);
    int x[n],p[t];
    for(i=0;i<n;i++)
        {
        scanf("%d",&x[i]);
    }
    for(i=0;i<t;i++)
    {
    	scanf("%d %d",&a,&b);
    	min=x[a];
    	for(j=a;j<=b;j++)
    	{
    		if(min>=x[j])
    		min=x[j];
    	}
    	p[i]=min;
    }
    for(i=0;i<t;i++)
    printf("%d\n",p[i]);
    return 0;
}
