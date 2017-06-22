#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void countSortPartial(int *a,int n){
    int count[n+1];
    for(int i=0;i<n+1;i++)count[i]=0;
    for(int i=0;i<n;i++)count[a[i]]++;
    for(int i=0;i<n;i++)a[i]=count[i];
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    countSortPartial(a,n);
    for(int i=0;i<=99;i++)cout<<a[i]<<" ";
    return 0;
}
