#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int v,n;
    scanf("%d",&v);
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
        {
        if(a[i]==v)
            {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
