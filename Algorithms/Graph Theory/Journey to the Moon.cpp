#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int main(){
    int n,p;
    cin>>n>>p;
    vector<vector<int> >v(n);
    for(int i=0;i<p;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int vis[n],count=0;
    for(int i=0;i<n;i++)vis[i]=0;
    queue<int>q;
    vector<int>x;
    unsigned long long int sum=0;
    for(int i=0;i<n;i++){
        int count=0;
        if(vis[i])continue;
        vis[i]=1;
        q.push(i);
        while(!q.empty()){
            for(int j=0;j<v[q.front()].size();j++){
                if(!vis[v[q.front()][j]]){
                    q.push(v[q.front()][j]);
                    vis[v[q.front()][j]]=1;
                }
            }
            q.pop();
            count++;
        }
        x.push_back(count);
        sum+=count;
    }
    unsigned long long int total=0,currsum=0;
    for(int i=0;i<x.size();i++){
        currsum+=x[i];
        total+=x[i]*(sum-currsum);
    }
    cout<<total;
}