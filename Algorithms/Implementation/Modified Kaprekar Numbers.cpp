#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


void cal(int p,int q)
    {
   unsigned long long int k=0,c,i,a[q-p],y,flag=0,j=1,l=0,f;
    unsigned long long int n,s,m;
    for(i=p;i<=q;i++)
        {
        c=0;
        s=i*i;
        n=s;
        while(n>0)
        {
		    n=n/10; 
            c++;
        }
        n=s;
        f=c/2;
        l=c-f;
        while(l--)
            n=n/10;
        m=s;
        l=c-f;
        f=l;
        c=0;
        int b[l];
        while(l--)
        {
        	b[f-1-c]=m%10;
        	m=m/10;
        	c++;
        	j=j*10;
        }
        m=0;
        for(l=0;l<c;l++)
        {
        	j=j/10;
        	m=m+b[l]*j;      
        }
        if(n+m==i)
            {
            a[k++]=i;
            flag=1;
        }
    }
    if(flag!=0)
    for(i=0;i<k;i++)
        {
        printf("%llu\t",a[i]);
    }
    else
        printf("INVALID RANGE");
}

int main() {

    int p,q;
    scanf("%d",&p);
    scanf("%d",&q);
    cal(p,q);
    return 0;
}
