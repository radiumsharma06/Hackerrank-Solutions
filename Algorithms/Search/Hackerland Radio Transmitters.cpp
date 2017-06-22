#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,k,count=0;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        int x=v[i]+k;
        int j=i;
        while(v[j]<=x && j<n-1)j++;
        if(v[j]>x)j--;
        x=v[j];
        j=i;
        while(abs(x-v[j])<=k && j<n)j++;
        i=j-1;
        count++;
    }
    cout<<count;
}