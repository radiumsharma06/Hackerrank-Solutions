#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct edge{
  int src,dest,wt;  
};

void display(vector<edge>v){
      for(int i=0;i<v.size();i++){
        cout<<v[i].src<<"-"<<v[i].dest<<": "<<v[i].wt<<endl;
    }
}

bool comp(edge a,edge b){return a.wt<b.wt;}

int find(int *parent,int i){
    if(parent[i]==-1)return i;
    else return find(parent,parent[i]);
}


int main() {
    int n,m;
    cin>>n>>m;
    vector<edge>v(m);
    for(int i=0;i<m;i++){
        int a,b,w;
        cin>>a>>b>>w;
        v[i].src=a;
        v[i].dest=b;
        v[i].wt=w;
    }
    sort(v.begin(),v.end(),comp);
 
    int ed=0,total=0,index=0;
    int parent[n+1];
    for(int i=0;i<n+1;i++)parent[i]=-1;
    while(ed<n-1){
        edge e=v[index++];
        int x=find(parent,e.src);
        int y=find(parent,e.dest);
        if(x==y)continue;
        parent[x]=y;
        total+=e.wt;
        ed++;
    }
    cout<<total;
    return 0;
}
