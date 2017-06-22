#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int cal(int n)
    {
    int count=0,y=n,k;
    while(y>0)
        {
        k=y%10;
        if(k!=0)
        if(n%k==0)
        count++;
        y=y/10;
    }
    return count;
}


int main() {
  
    int t,n,i;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
        {
        scanf("%d",&n);
        a[i]=cal(n);
    }
    for(i=0;i<t;i++)
        printf("%d\n",a[i]);
    return 0;
}
