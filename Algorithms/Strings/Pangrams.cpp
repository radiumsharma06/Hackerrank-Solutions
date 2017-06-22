#include<iostream>
using namespace std;

int main(){
	char c[1000];
	gets(c);
	int n=0,flag=0;
	while(c[n]!='\0')n++;
	int a[26];
	for(int i=0;i<n;i++){
		if(c[i]>=65&&c[i]<=90){
			a[c[i]-65]=-1;
		}
		else a[c[i]-97]=-1;
	}
	for(int i=0;i<26;i++){
		if(a[i]!=-1){
			flag=1;
			break;
		}
	}
	if(flag==0)cout<<"pangram";
	else cout<<"not pangram";
	return 0;
}