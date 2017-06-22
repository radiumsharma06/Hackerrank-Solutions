#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int count=0;
    map<int,int>hm;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(hm[a[i]]==0){
            hm[a[i]]=1;hm[a[i]+1]=1;hm[a[i]+2]=1;hm[a[i]+3]=1;hm[a[i]+4]=1;
            count++;
        }
    }
    cout<<count;
    return 0;
}
