#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,i,pos=0,neg=0,zer=0;
   float x,y,z;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        if(a[i]>0)
            pos++;
        else if(a[i]<0)
            neg++;
            else
            zer++;
    }
    
    x=(float)pos/(float)n;
    y=(float)neg/(float)n;
    z=(float)zer/(float)n;
    printf("%.3f\n%.3f3\n%.3f3",x,y,z);
    return 0;
}
