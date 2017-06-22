#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<n-2;i++){
        if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0'){
            s[i+2]='1';
            c++;
        }
    }
    cout<<c;
}