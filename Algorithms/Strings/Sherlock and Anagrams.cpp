#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
  
long long int pc(int n){
   int x=n-2; 
   long long int f=1,i=n;
   while(i!=x){
       f*=i;
       i--;
   } 
   f/=2;
   return f; 
}

long long int func(string s){
    int n=s.length();
    long long int count=0;
    map<string,int>hm;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            string x=s.substr(i,j);
            sort(x.begin(),x.end());
            hm[x]++;
        }
    }
    map<string,int>::iterator it;
    for(it=hm.begin();it!=hm.end();it++){
        if(it->second==2)count++;
        else if(it->second>2)count+=pc(it->second);
    }
    return count;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<func(s)<<endl;
    }
    return 0;
}
