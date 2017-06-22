#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j,x,min,y,k,count;
    scanf("%d",&n);
    x=n;
    int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    while(x>0)
        {
        	count=0;
        printf("%d\n",x);
        min=a[0];
        for(j=0;j<x;j++)
            {
            if(min>=a[j])
                min=a[j];
        }
        for(k=0;k<x;k++)
        {
        a[k]=a[k]-min;
        if(a[k]<=0)
        {
        	for(y=k;y<x;y++)
        	a[y]=a[y+1];
        	x--;
        	k--;
        }
        }
        
    }
    return 0;
}
