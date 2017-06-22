#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int cal(int a,int b)
    {
    int i,count=0,y=1,x=a,k;
    for(i=a;i<=b;i=k)
        {
        y=sqrt(i);
        if(y*y==i)
        count++;
        x=y+1;
        if(x*x<b)
        k=x*x;
        else
        k=i+1;
    }
    return count;
}


int main() {
  
    int t,i,a,b;
    scanf("%d",&t);
    int x[t];
    for(i=0;i<t;i++)
        {
        scanf("%d %d",&a,&b);
        x[i]=cal(a,b);
    }
    for(i=0;i<t;i++)
        printf("%d\n",x[i]);
    return 0;
}
