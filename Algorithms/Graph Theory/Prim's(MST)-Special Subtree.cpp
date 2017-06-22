#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;


int findMin(vector<int>key,vector<int>mk){
    int min=100000,index;
    for(int i=1;i<mk.size();i++){
        if(mk[i]==-1 && key[i]<min){
            min=key[i];
            index=i;
        }
    }
    return index;
}

int main() {
    int n,m,s;
    cin>>n>>m;
    vector<vector<pair<int,int> > >v(n+1);
    for(int i=0;i<m;i++){
        int a,b,w;
        cin>>a>>b>>w;
        v[a].push_back(make_pair(b,w));
        v[b].push_back(make_pair(a,w));
    }
    cin>>s;
    vector<int>mk(n+1,-1),key(n+1,1000000),parent(n+1,0);
    parent[s]=-1; key[s]=0;
    long long int total=0;
    for(int i=0;i<n;i++){
        int u=findMin(key,mk);
        mk[u]=1;
        total+=key[u];
        vector<pair<int,int> >x=v[u];
        for(int j=0;j<x.size();j++){
            int vertex=x[j].first;
            int wt=x[j].second;
            if(mk[vertex]==-1 && wt<key[vertex] ){
                key[vertex]=wt;
            }
        }
    }
    cout<<total;
    return 0;
}
