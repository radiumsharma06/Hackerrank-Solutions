#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

string func(map<int,vector<char> >vm){
    if(vm.size()>2)return "NO";
    if(vm.size()==1)return "YES";
    map<int,vector<char> >::iterator it1,it2;
    it1=vm.begin(),it2=vm.begin();it2++;
    if((it1->second).size()>1 && (it2->second).size()>1)return "NO";
    return "YES";
}

int main() {
    string s;
    cin>>s;
    int n=s.length();
    map<char,int>hm;
    map<char,int>::iterator it;
    for(int i=0;i<n;i++)hm[s[i]]++;
    map<int,vector<char> >vm;
    for(it=hm.begin();it!=hm.end();it++){
        vm[it->second].push_back(it->first);
    }
    cout<<func(vm);
    return 0;
}
