#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {

    int t;
    cin>>t;
    int x[t];
	 for(int k=0;k<t;k++){
	 	char s[10001]="\0";
	    cin>>s;
	    
	if(strlen(s)%2!=0){
	 x[k]=-1;
	 continue;
    }
	 char a[5000]="\0",b[5000]="\0";
	 for(int i=0;i<strlen(s)/2;i++){
	 	a[i]=s[i];
	 	b[i]=s[i+(strlen(s)/2)];
	 }
	 int r[123]={0,};
	 int d=0;
	    
	 for(int i=0;i<strlen(a);i++){
	 	char c=a[i];
	 	int d1=1,d2=0;
	 	if(r[c]!=-1){
	 		r[c]=-1;
	 		for(int j=i+1;j<strlen(a);j++){
	 			if(a[j]==c)
	 			d1++;
	 		}
	 		for(int j=0;j<strlen(b);j++){
	 			if(b[j]==c)
	 			d2++;
	 		}
	 		if(d1>d2)
	 		d=d+abs(d1-d2);
	 	}
	 }
	 x[k]=d;
    }
    for(int i=0;i<t;i++){
    	cout<<x[i]<<endl;
    }
    return 0;
}
