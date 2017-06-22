#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

unsigned long long int cal(unsigned long long int n,unsigned long long int m,unsigned long long int x,unsigned long long int y,unsigned long long int z)
{
	
	if(z>=x&&z>=y)
	return (n*x+m*y);
	return n*((y+z)>=x?x:(y+z))+m*((x+z)>=y?y:(x+z));	
}





int main() {
     
     unsigned long long int t,i,n,m,x,y,z; 
     scanf("%d",&t);
     unsigned long long int a[t];
     for(i=0;i<t;i++)
     {
     	scanf("%llu %llu",&n,&m);
     	scanf("%llu %llu %llu",&x,&y,&z);
     	a[i]=cal(n,m,x,y,z);
     }
     for(i=0;i<t;i++)
     printf("%llu\n",a[i]);
    return 0;
}