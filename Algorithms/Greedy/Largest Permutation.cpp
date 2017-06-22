#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int main() {
    int n;
    unsigned long long int k;
    cin>>n;
    cin>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    map<int,int>hm;
    for(int i=0;i<n;i++)hm[v[i]]=i;
    map<int,int>::iterator it;
   // for(it=hm.begin();it!=hm.end();it++)cout<<it->first<<":"<<it->second<<endl;
    int pos=0;
    while(k && pos<n){
        int x=hm[n-pos];
        if(pos!=x){
            int t=hm[v[pos]];
            hm[v[pos]]=hm[v[x]];
            hm[v[x]]=t;
            swap(&v[pos],&v[x]);
            k--;
        }  
        pos++;
    }
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    return 0;
}
