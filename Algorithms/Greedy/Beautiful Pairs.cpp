#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    map<int,int>hm;
    for(int i=0;i<n;i++)hm[a[i]]++;
    int count=0,flag=0;
    for(int i=0;i<n;i++){
        if(hm[b[i]]>0){
            count++;
            hm[b[i]]--;
        }
        else flag=1;
    }
    if(flag)count++;
    else count--;
    cout<<count;
    return 0;
}
