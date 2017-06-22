#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

string func(string a,string b){
    int n=a.length(),m=b.length();
    if(n<m)return "NO";
    map<char,int>hm;
    for(int i=0;i<n;i++)if(a[i]<=90 && a[i]>=65)hm[a[i]]++;
    for(int i=0;i<m;i++)hm[b[i]]--;
    map<char,int>::iterator it;
    for(it=hm.begin();it!=hm.end();it++)if(it->second>0)return "NO";
    char search=b[0];
    int count=0;
    for(int i=0;i<n;i++){
        char c=toupper(a[i]);
        if(a[i]==search || c==search){
            count++;
            if(count==m)return "YES";
            search=b[count];
        }
    }
    return "NO";
}

int main() {
    int q;
    cin>>q;
    while(q--){
        string a,b;
        cin>>a>>b;
        cout<<func(a,b)<<endl;
    }
    return 0;
}
