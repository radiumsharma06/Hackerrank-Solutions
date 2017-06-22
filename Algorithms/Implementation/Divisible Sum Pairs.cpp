#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    int sum=0;
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int x=v[i]+v[j];
            if(x%k==0)sum++;
        }
    }
    cout<<sum;
}