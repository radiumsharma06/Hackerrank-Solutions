#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int minDistance(int x,vector<int>v){
    int min=INT_MAX;
    for(int i=0;i<v.size();i++){
        int s=abs(v[i]-x);
        if(s<min)min=s;
    }
    return min;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v(m);
    for(int i=0;i<m;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int max=0,s;
    for(int i=0;i<n;i++){
        s=minDistance(i,v);
        if(s>max)max=s;
    }
    cout<<max<<endl;    
}