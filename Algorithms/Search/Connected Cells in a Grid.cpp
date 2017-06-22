#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

int v[10][10];
void initialise(int n,int m){
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)v[i][j]=0;
}
int func(vector<vector<int> >a,int i,int j,int n,int m){
    if(i<0||j<0||i>=n||j>=m)return 0;
    if(v[i][j])return 0;
    if(a[i][j]==0)return 0;
    v[i][j]=1;
    return 1+(
    func(a,i,j+1,n,m)+func(a,i,j-1,n,m)+func(a,i+1,j,n,m)+func(a,i-1,j,n,m)+func(a,i+1,j+1,n,m)+func(a,i-1,j-1,n,m)+
        func(a,i-1,j+1,n,m)+func(a,i+1,j-1,n,m)
    );
}

int main() {
    int n,m;
    cin>>n>>m;
    initialise(n,m);
    vector<vector<int> >a(n);
    for(int i=0;i<n;i++)for(int j=0;j<m;j++){
        int x;
        cin>>x;
        a[i].push_back(x);
    }
    int max=0,ans;
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)v[i][j]=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!v[i][j]){
                ans=func(a,i,j,n,m);
                if(ans>max)max=ans;
            }
        }
    }
    cout<<max;
    return 0;
}
