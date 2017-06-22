#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    int c=0;
    int k=0;
    for(int i=1;i<n;i=i+3){
        if(s[i]!='O')c++;
        if(s[i-1]!='S')c++;
        if(s[i+1]!='S'&&i<n-1)c++;
    }
    cout<<c;
}