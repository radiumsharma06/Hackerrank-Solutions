#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int func(vector<int>v,int k){
    int count=0,n=v.size();
    int a=-10000000;
    for(int i=0;i<n;i++){
        //cout<<i<<":";
        int x=i+k,j=i;
        while(j<=x && j<n){
            if(v[j]==1)a=j;
            j++;
        }
       // cout<<a<<endl;
        if(v[i]==0 && a+k<i)return -1;
        x=a+k;
        j=a;
        while(j<=x && j<n){
            if(v[j]==1)a=j;
            j++;
        }
        i=x;
      //  cout<<i<<endl;
        count++;
    }
    return count;
}

int main() {
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int noOfTowers=func(v,k-1);
    cout<<noOfTowers;
    return 0;
}
