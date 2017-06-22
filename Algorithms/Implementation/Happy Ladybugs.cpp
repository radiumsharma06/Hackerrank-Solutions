#include<iostream>
#include<map>
using namespace std;

int check(string s,int n){
    for(int i=0;i<n;i++){
        if(s[i]!=s[i-1] && s[i]!=s[i+1])return 0;
    }
    return 1;
}

string func(string s,int n){
     map<char,int>hm;
     map<char,int>::iterator it;
     for(int i=0;i<n;i++)hm[s[i]]++;
     if(hm['_']==0){
         if(check(s,n))return "YES";
         else return "NO";
     }
     for(it=hm.begin();it!=hm.end();it++){
         if(it->second==1 && it->first!='_')return "NO";
     }
    return "YES";
}

int main(){
    int g;
    cin>>g;
    while(g--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        cout<<func(s,n)<<endl;
    }
}