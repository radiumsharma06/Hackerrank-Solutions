#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void func(vector<int>v,int n,int k){
	int pg=1,s=0,j,c;
	for(int i=0;i<n;i++){
		j=1;c=1;
		while(j<=v[i]){
			if(pg==j){
				s++;
			}
			j++;
			c++;
			if(c>k&&j<=v[i]){
				pg++;
				c=c-k;
			}
		}
		pg++;
	}
	cout<<s<<endl;
}

int main() {
    int n,k;
	cin>>n>>k;
	vector<int>v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	func(v,n,k);   
    return 0;
}
