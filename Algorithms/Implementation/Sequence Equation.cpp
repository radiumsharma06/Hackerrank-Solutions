#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>hm;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        hm[x]=i+1;
    }
    for(int i=0;i<n;i++)cout<<hm[hm[i+1]]<<endl;
}