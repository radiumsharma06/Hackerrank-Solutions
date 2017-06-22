#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        long long count=0,ans=0;
        cin>>n;
        vector<long long int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        for(int i=0;i<n;i++){
            count=n-i+(i*(n-i));
            if(count%2!=0)ans=ans^v[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
