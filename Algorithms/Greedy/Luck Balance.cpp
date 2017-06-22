#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max(int a,int b){
    return a>=b?a:b;
}

int main() {
    int n,k;
    cin>>n>>k;
    vector<int>l(n),t(n);
    for(int i=0;i<n;i++)cin>>l[i]>>t[i];
    vector<int>v;
    int sum=0;
    for(int i=0;i<n;i++)if(t[i]==1)v.push_back(l[i]);else sum+=l[i];
    if(v.size()>0){   
    sort(v.begin(),v.end());
    int x=v.size()-k;
    if(k>=v.size())x=0;    
    for(int i=x;i<v.size();i++)sum+=v[i];
    for(int i=0;i<x;i++)sum-=v[i];
    }
    cout<<sum;
    return 0;
}
