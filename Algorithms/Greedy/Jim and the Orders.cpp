#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<int,vector<int> >hm;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v[i]=a+b;
        hm[v[i]].push_back(i+1);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int i=0;i<v.size();i++){ 
        for(int j=0;j<hm[v[i]].size();j++)cout<<hm[v[i]][j]<<" "; 
    }
    return 0;
}
;