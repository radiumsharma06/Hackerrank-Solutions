#include<iostream>
#include<algorithm>
using namespace std;

int func(int n,int k){
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int sum=0;
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]<=k){
			count++;
			k-=a[i];
		}
	}
	return count;
}

int main(){
	int n,k;
	cin>>n>>k;
	cout<<func(n,k);
}