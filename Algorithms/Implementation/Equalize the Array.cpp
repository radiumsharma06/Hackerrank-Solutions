#include <cmath>
#include <cstdio>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    map<int,int>hm;
    for(int i=0;i<n;i++)hm[a[i]]++;
    map<int,int>::iterator it;
    int max=0;
    for(it=hm.begin();it!=hm.end();it++)if(it->second>max)max=it->second;
    cout<<n-max;    
    return 0;
}
