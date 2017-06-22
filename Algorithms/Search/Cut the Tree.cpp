#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<int> >v;
vector<int>x,vis;

int dfs(int s){
    vis[s]=1;
    int sum=0;
    vector<int>::iterator it;
    for(it=v[s].begin();it!=v[s].end();it++){
        if(!vis[*it])sum+=dfs(*it);
    }
    x[s]+=sum;
    return x[s];
}

int main() {
    int n;
    cin>>n;
    v.resize(n);x.resize(n);vis.resize(n);
    int total=0;
    for(int i=0;i<n;i++){
        cin>>x[i];
        total+=x[i];
    }
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        v[a-1].push_back(b-1);
        v[b-1].push_back(a-1);
    }
    for(int i=0;i<n;i++)vis[i]=0;
    dfs(0);
    int min=100000000;
    for(int i=0;i<n;i++){
        if(abs(total-x[i]-x[i])<min)min=abs(total-x[i]-x[i]);
    }
    cout<<min;
    return 0;
}