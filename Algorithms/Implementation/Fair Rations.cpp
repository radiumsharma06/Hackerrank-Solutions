#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	int a[n]={0};
	int count=0,ct=0,flag=1;
	for(int i=0;i<n;i++){
		if(i==n-1&&v[i]%2!=0&&v[i-1]%2==0){
			flag=0;
			break;
		}
		if(v[i]%2!=0){
			ct++;
			a[i]=-1;
			v[i]+=1;
		}
		if(a[i]==-1){
		    ct++;
		    v[i+1]+=1; 
		}
	}
	if(flag)
	cout<<ct;
	else cout<<"NO";
}