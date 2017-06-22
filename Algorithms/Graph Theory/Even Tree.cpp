#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int>visited;

int ans=0;

int dfs(vector<vector<int> >v,int i){
    visited[i]=1;
    vector<int>::iterator it;
    int total=1;
    for(it=v[i].begin();it!=v[i].end();it++){
        int count=0;
        if(!visited[*it]){
            count+=dfs(v,*it);
        }
        total+=count;
        if(count%2==0 && count!=0)ans++;
    }
    return total;
}

int main() {
    int n,m;
    cin>>n>>m;
    visited.resize(n,0);
    vector<vector<int> >v(n);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        v[a-1].push_back(b-1);
        v[b-1].push_back(a-1);
    }
    dfs(v,0);
    cout<<ans;
    return 0;
}
