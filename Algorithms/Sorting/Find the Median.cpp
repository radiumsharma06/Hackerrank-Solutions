#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n,x;
    cin>>n;
    map<int,int>hm;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>x;
        v[i]=x;
        hm[x]=1;
    }
    sort(v.begin(),v.end());
    int ans=(n-1)/2,count=0;
   
    cout<<v[ans];
    return 0;
}
