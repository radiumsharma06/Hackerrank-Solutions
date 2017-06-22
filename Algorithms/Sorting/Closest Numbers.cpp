#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<long long int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    long long int min=10000000;
    for(int i=0;i<n-1;i++){
        long long int x=abs(v[i]-v[i+1]);
        if(x<min)min=x;
    }
    for(int i=0;i<n-1;i++){
        long long int x=abs(v[i]-v[i+1]);
        if(x==min)cout<<v[i]<<" "<<v[i+1]<<" ";
    }
   
    return 0;
}
