#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[10000],c;
    int t,i,count,flag,a,b;
    scanf("%d",&t);
    while(t--)
    {
    	count=0;
    	flag=0;
    scanf("%s",&s);
    while(s[count]!='\0')
    count++;
    char r[count];
    for(i=0;i<count;i++)
    {
    	r[i]=s[count-1-i];
    }
    for(i=0;i<count-1;i++)
    {
    	a=abs((s[i]-s[i+1]));
    	b=abs((r[i]-r[i+1]));
    	if(b!=a)
    	{
    		flag=1;
			break;
    	}
    }
    if(flag==0)
    printf("Funny\n");
    else
    printf("Not Funny\n");
   }
    return 0;
}
