#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    vector<unsigned long long int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    unsigned long long int min=10000000000;
    for(int i=0;i<=n-k;i++){
        unsigned long long int x=v[i+k-1]-v[i];
        if(x<min)min=x;
    }
    cout<<min;
    return 0;
}
