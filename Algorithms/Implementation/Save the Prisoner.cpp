#include<iostream>
using namespace std;

int func(int n,int m,int s){
	s+=m-1;
	s%=n;
	if(s%n==0)s=n;
	return s;
}

int main(){
	int t,n,m,s;
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++){
		cin>>n>>m>>s;
		a[i]=func(n,m,s);
	}
	for(int i=0;i<t;i++)cout<<a[i]<<endl;
}