#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    scanf("%d",&n);
    unsigned long long int sum=0,a[n];
    for(i=0;i<n;i++)
    {
    scanf("%llu",&a[i]);    
    sum=sum+a[i];    
    }
    printf("%llu",sum);
    return 0;
}