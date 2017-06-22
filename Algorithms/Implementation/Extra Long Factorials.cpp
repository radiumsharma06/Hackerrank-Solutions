#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
    {
    int a[200],x; 
    int n,i,j,temp,m;
       scanf("%d",&n);
       a[0]=1; 
       m=1;    

       temp = 0; 
       for(i=1;i<=n;i++)
       {
            for(j=0;j<m;j++)
            {
               x = a[j]*i+temp; 
               a[j]=x%10; 
               temp = x/10; 
            }
             while(temp>0) 
             { 
               a[m]=temp%10;
               temp = temp/10;
               m++; // 
             }
      }
              for(i=m-1;i>=0;i--) 
              printf("%d",a[i]);
              printf("\n");
    
    return 0;
}