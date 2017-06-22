#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
 void findPalind(char *arr)
{
     
    int flag = 0,f=0;
    int count=0,i,j,t,a[100001],ch[100001],k=0;
    char c;
    while(arr[count]!='\0')
    count++;
    for(i=0;i<count;i++)
    {
    	c=arr[i];
    	t=1;
    	f=0;
    	if(ch[c]!=-1)
    	{
    	for(j=i+1;j<=count;j++)
    	{
    		if(c==arr[j])
    		{
    			t++;
    	    }
    	}
    	a[k++]=t;
    	ch[c]=-1;
    	}
    }
    f=0;t=0;
    for(i=0;i<k;i++)
    {
    	if((a[i]%2)!=0&&f==-1)
    	{
    		flag=1;
    		break;
    	}
       if((a[i]%2)!=0)
       f=-1;
    }
    
    if (flag==0)
        printf("YES\n");
    else
        printf("NO\n");
    
    return;
}
int main() {

    char arr[100001];
    scanf("%s",arr);
    findPalind(arr);
    return 0;
}
