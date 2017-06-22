#include<iostream>
using namespace std;

string check(string s,string t,int k){
    int n=s.length(),m=t.length();
    if(n+m<=k)return "Yes";
    int i=0;
    while(s[i]==t[i] && i<n && i<m)i++;
    n+=m-i-i;
    if(n==k)return "Yes";
    if(n>k)return "No";
    if((k-n)%2==0)return "Yes";
    return "No";
}

int main(){
    string s,t;
    cin>>s>>t;
    int k;
    cin>>k;
    cout<<check(s,t,k);
}