#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<long int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end(),greater<int>());
    int a,b,c;
    int f=-1;
    for(int i=0;i<n-2;i++){
        if(v[i+2]+v[i+1]>v[i]){
            a=v[i+2];b=v[i+1];c=v[i];
            f=0;
            break;
        }
    }
    if(f!=0)cout<<f;
    else cout<<a<<" "<<b<<" "<<c;
    return 0;
}
