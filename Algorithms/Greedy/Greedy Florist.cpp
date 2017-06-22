#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<unsigned long long int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end(),greater<unsigned long long int>());
    unsigned long long int cost=0;
    int j=0,x=0,y;
    while(j<n){
        if(j+k<n)y=j+k;
        else y=n;
        for(int i=j;i<y;i++)cost+=(x+1)*v[i];
        x++;
        j+=k;
    }
    cout<<cost;
}