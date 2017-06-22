#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int l,int *a,int r){
    int s=0;
    for(int i=l;i<r;i++)s+=a[i];
    return s;
}

string check(int *a,int n){
   int lsum=0,rsum=0;
    for(int i=0;i<n;i++)rsum+=a[i];
    for(int i=0;i<n;i++){
        rsum-=a[i];
        if(lsum==rsum)return "YES";
        lsum+=a[i];
    }
    return "NO";    
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        cout<<check(a,n)<<endl;
    }
    return 0;
}
