#include<iostream>
#include<string>
using namespace std;

int isUpper(char c){
    if(c>=65&&c<=90)return 1;
    else return 0;
}

int main(){
    string s;
    cin>>s;
    int n=s.length();
    int c=1;
    for(int i=0;i<n;i++){
        if(isUpper(s[i]))c++;
    }
    cout<<c;
}