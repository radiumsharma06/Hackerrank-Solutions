#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int total;

int isValid(int i,int j,int n,int m){
    return i>=0 && i<n && j>=0 && j<m;
}

int dx[4]={1,-1,0,0};
int dy[4]={0,0,-1,1};

int  dfs(vector<string>v,int s,int e,int x,int y,int n,int m){
    if(v[s].at(e)=='*')return 1;
    int flag=0,ct=0;
    for(int i=0;i<4;i++){
        int nx=s+dx[i];
        int ny=e+dy[i];
        if(!isValid(nx,ny,n,m))continue;
        if(nx==x && ny==y)continue;
        if(v[nx].at(ny)=='X')continue;
        if(dfs(v,nx,ny,s,e,n,m))flag=1;
        ct++;
    }
    if(flag && ct>1)total+=1;
    return flag;
}

void func(vector<string>v,int n,int m){
    int rs,cs,re,ce;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++){
        if(v[i].at(j)=='M'){
            rs=i;
            cs=j;
        }
        else if(v[i].at(j)=='*'){
            re=i;
            ce=j;
        }
    }
    dfs(v,rs,cs,-1,-1,n,m);
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m;
        vector<string>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        cin>>k;
        total=0;
        func(v,n,m);
        if(k==total)cout<<"Impressed";
        else cout<<"Oops!";
        cout<<endl;
    }
    return 0;
}
