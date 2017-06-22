#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    unsigned long long int n;
    cin>>n;
    unsigned long long int ans=0,a=0;
    for(int i=0;i<s.length();i++)
        if(s[i]=='a')a++;
    ans=(n/s.length())*a;
    n%=s.length();
    for(int i=0;i<n;i++)if(s[i]=='a')ans++;
    cout<<ans;
}