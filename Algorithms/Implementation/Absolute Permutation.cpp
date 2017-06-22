#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>v){
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<endl;
}

void swap(int *a,int *b){
    int t=*a;*a=*b;*b=t;
}

vector<int> func(int n,int k){
    vector<int>v(n);
    for(int i=0;i<n;i++)v[i]=i+1;
    int vis[n]={0,},flag=0;
    for(int i=0;i<n;i++){
        if(vis[i])continue;
        if(i+k>=n){
            flag=1;break;
        }
        swap(&v[i],&v[i+k]);
        vis[i]=vis[i+k]=1;
    }
    if(flag==1){
        v.resize(1);v[0]=-1;
    }
    return v;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        display(func(n,k));
    }
}