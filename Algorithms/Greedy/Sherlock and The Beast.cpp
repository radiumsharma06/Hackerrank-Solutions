#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insert(int x,int n){
	if(x==-1){
		cout<<x<<endl;
		return;
	}
	int a[n];
	for(int i=0;i<n-x;i++)a[i]=5;
	for(int i=n-x;i<n;i++)a[i]=3;
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<endl;
}

void func(int n){
     int x=-1,k;
	 if(n%3==0)x=0;
	 else{
	 	k=n;
	 	while(k%3!=0&&k>0){
	 		k=k-5;
		 }
		 if(k%3==0&&k>=0)x=n-k;
	 }
	 insert(x,n);
}

int main(){
    int t,n;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>n;
        func(n);
    }
    return 0;
}
