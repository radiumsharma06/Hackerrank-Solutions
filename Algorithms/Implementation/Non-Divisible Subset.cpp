#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int findMaxSubset(vector<int>v,int k){
    map<int,int>m;
    for(int i=0;i<v.size();i++){
       int x=v[i]%k;
     if(x==0)m[x]=1;
        else m[x]++;
    }
    int count=m[0];
    int start=1;
    int end=k-1;
        while(start<end){
        count+=max(m[start],m[end]);
        start++;
        end--;
    }
    if(k%2==0&&m.find(k/2)!=m.end())count++;
    return count;
}

int main() {
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<findMaxSubset(v,k);
    return 0;
}
