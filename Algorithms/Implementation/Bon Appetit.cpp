#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int findDifference(int sum,int k,int *a,int c){
    if((sum-a[k])/2==c)return 1;
    return c-(sum-a[k])/2;
}

int main() {
    int n,k,c;
    cin>>n>>k;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cin>>c;
    int x=findDifference(sum,k,a,c);
    if(x==1)cout<<"Bon Appetit";
    else cout<<x;
    return 0;
}
