#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n, c, m;
    int a,b,w,temp;
    scanf("%d", &t);
    while ( t--)
    {
        scanf("%d%d%d",&n,&c,&m); 
        a=n/c;
        w=a;
        while(1)
        {
        temp=w/m;
        if(temp==0)
        break;
        a=a+temp;
        w=w-(temp*m);
        w=w+temp;
	    }
        printf("%d\n",a);
    }
    return 0;
}
