#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n,d;
    cin>>n>>d;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int count=0;
    map<int,int>hm;
    for(int i=0;i<n;i++){
        if(find(v.begin()+i,v.end(),v[i]+d)!=v.end()&&find(v.begin()+i,v.end(),v[i]+(d*2))!=v.end())count++;
    }
    cout<<count;
    return 0;
}
