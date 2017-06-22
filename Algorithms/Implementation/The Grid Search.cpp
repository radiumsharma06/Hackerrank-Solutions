#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


char cal(int r,int c)
{
    int a[r][c];
	int r1,c1,i,j,p,q,k1,k2,flag=0,count;
	char z;
	 for(i=0;i<r;i++)
        {
        	for(j=0;j<c;j++)
        	{
        		scanf("%1d",&a[i][j]);
        	}
        }
    
        scanf("%d %d",&r1,&c1);
        long b[r1][c1];
        for(i=0;i<r1;i++)
        {
        	for(j=0;j<c1;j++)
        	{
        		scanf("%1llu",&b[i][j]);
        	}
        }
        j=0;
        for(i=0;i<r;i++)
        {
        	
            	for(j=0;j<c;j++)
        	{
        	
        		count=0;
        		if(a[i][j]==b[0][0]&&((c-j)>=c1)&&(r-i)>=r1)
        		{
        			for(p=0,k1=i;p<r1;p++,k1++)
        			{
        				for(q=0,k2=j;q<c1;q++,k2++)
        				{
        					if((a[i+r1-1][j+c1-1]!=b[r1-1][c1-1])&&(a[i][j+c1-1]!=b[0][c1-1])&&(a[i+r1][j]!=b[r1-1][0]))
        					{
        						z='n';
               					break;
        					}
        					if(a[k1][k2]!=b[p][q])
        					{
        					z='n';
        				    break;
        				    }
        					else
        					{
        					count++;
        				    }
        				}		
        	    
        	          
					}
				if(count==r1*c1)
        		{
        		z='y';
        		goto end;      		
        	    }
			
			 
        	}
        
        	     
        	}
        	
        }
        end:
        return z;
}

int main() {

    int t,n,i,r,c,r1=0,c1=0;
    scanf("%d",&t);
    int a[t];
    char s[t];
    char *f[t];
    for(i=0;i<t;i++)
        {
        scanf("%d %d",&r,&c);
        s[i]=cal(r,c);
    }
    for(i=0;i<t;i++)
    if(s[i]=='y')
    f[i]="YES";
    else
    f[i]="NO";
    for(i=0;i<t;i++)
    printf("%s\n",f[i]);
    return 0;
}
