#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

unsigned long long int powerOf2(unsigned long long int n){
	unsigned long long int x;
	for(unsigned long long int i=0;pow(2,i)<n;i++){
		x=pow(2,i);
		}
		return x; 	
}

string winner(unsigned long long int n){
	string win="";
	unsigned long long int turn=0,x;
	while(n!=1){
		x=powerOf2(n);
		if(x==n)
		n=n/2;
		else{
		    n=n-x;
		}
		turn++;
	}
	if(turn%2==0)
	win="Richard";
	else
	win="Louise";
	return win;
}

int main() {
    int t;
    cin>>t;
    string a[t];
    unsigned long long int n;
    for(int i=0;i<t;i++){
    	cin>>n;
    	a[i]=winner(n);
    }
    for(int i=0;i<t;i++){
    	cout<<a[i]<<endl;
    }
    return 0;
}
