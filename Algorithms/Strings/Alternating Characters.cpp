#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findmindelete(char *c){
	int n=0,op=0,j;
	while(c[n]!='\0')n++;
	for(int i=0;i<n-1;i++){
		if(c[i]=='A'){
			j=i+1;
			while(c[j]!='B'&&j<n){
				op++;
				j++;
			}
		}
		else{
			j=i+1;
			while(c[j]!='A'&&j<n){
			op++;
			j++;
		    }
		}
		i=j-1;
	}
	return op;
}

int main() {
    int t;
	char c[100000];
	cin>>t;
	int a[t];
	for(int i=0;i<t;i++){
		cin>>c;
		a[i]=findmindelete(c);
	}
	for(int i=0;i<t;i++){
		cout<<a[i]<<endl;
	}  
    return 0;
}
