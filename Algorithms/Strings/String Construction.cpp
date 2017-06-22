#include<iostream>
#include<string>
using namespace std;

int func(string s){
    int n=s.length();
    int c=0,i=0;
    string p="";
    while(p!=s){
        int flag=0;
        for(int k=0;k<p.length();k++){
           if(s[i]==p[k]){
               flag=1;break;
           }
        }
        p+=s[i];
        if(flag==0)c++;
        i++;
    }
      
    return c;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        a[i]=func(s);
    }
    for(int i=0;i<n;i++)cout<<a[i]<<endl;
}