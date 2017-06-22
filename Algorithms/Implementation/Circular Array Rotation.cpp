#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,q;
    cin>>n>>k>>q;
    int a[n],x[n],b[q];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<q;i++)cin>>b[i];
    k%=n;
    for(int i=0;i<n;i++){
        if(i+k<=n-1)x[i+k]=a[i];
        else x[i+k-n]=a[i];
    }
    for(int i=0;i<n;i++)a[i]=x[i];
    for(int i=0;i<q;i++)
       cout<<a[b[i]]<<endl;
    return 0;
}
