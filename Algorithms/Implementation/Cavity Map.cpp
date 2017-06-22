#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  unsigned long long int n,i,j;
    scanf("%llu",&n);
    unsigned long long int a[n][n];
    char b[n][n];
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            scanf("%1llu",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            if(i!=0&&j!=0&&j!=(n-1)&&i!=(n-1))
                {
                if(a[i][j]>a[i+1][j]&&a[i][j]>a[i][j+1]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i][j-1])
                a[i][j]=-1;
            }
        }
    }
      
     for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            	if(a[i][j]!=-1)
            printf("%llu",a[i][j]);
            else
            printf("X");
        }
        printf("\n");
    }
    return 0;
}
