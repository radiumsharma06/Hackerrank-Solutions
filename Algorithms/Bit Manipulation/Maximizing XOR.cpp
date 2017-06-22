#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int getDecimal(vector<int> v){
	int d=0;
	for(int i=0;i<v.size();i++){
		d=d+pow(2,i)*v[v.size()-1-i];
	}
	return d;
}

vector<int> getBinary(int x){
	vector<int> v;
	int y;
	while(x!=0){
		y=x%2;
		x=x/2;
		v.push_back(y);
	}
	reverse(v.begin(),v.end());
	return v;
}

int getXor(int l,int r){
	vector<int> v1,v2;
	v1=getBinary(l);
	v2=getBinary(r);
	int n1=v1.size(),n2=v2.size();
	int n=n1<n2?n1:n2;
	int x=n1>n2?n1:n2;
	vector<int> v(x);
	for(int i=0;i<n;i++){
		if(v1[n1-1-i]==v2[n2-1-i])
		   v[x-1-i]=0;
		   else
		   v[x-1-i]=1;
	}
	vector<int> a=n1>n2?v1:v2;
	for(int i=0;i<x-n;i++){
		if(a[i]==1)
		v[i]=1;
		else
		v[i]=0;
	}
	return getDecimal(v);
}

int maxXor(int l, int r) {

  int max=0,g;
  for(int i=l;i<=r;i++){
  	for(int j=i;j<=r;j++){
  		g=getXor(i,j);
  		if(g>max)
  		max=g;
  	}
  }
  return max;
}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}
