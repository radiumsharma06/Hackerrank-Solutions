#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin>>q;
    while(q--){
        int n,k,flag=0;
        cin>>n>>k;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        for(int i=0;i<n;i++)if(a[i]+b[i]<k){
            flag=1;break;
        }
        if(flag==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
