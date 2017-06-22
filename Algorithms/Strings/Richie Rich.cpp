#include<iostream>
#include<string>
using namespace std;

string findLargest(string s,int k){
    int n=s.length(),c=0;
    for(int i=0;i<n/2;i++)
        if(s[i]!=s[n-1-i])c++;
    if(c>k)return "-1";
    int j=0;
        while(k!=0 && j<n/2){
        if(s[j]!=s[n-1-j]){
           char x=s[j]>s[n-1-j]?s[j]:s[n-1-j];
            if(k-1>=c && x!='9'){
                s[j]='9';s[n-1-j]='9';
                k-=2;
            }
            else {
                s[j]=x;s[n-1-j]=x;
                k--;
            }
            c--;
        }
        else{
            if(k-2>=c && s[j]!='9'){
                s[j]='9';s[n-1-j]='9';
                k-=2;
            }
        }    
       j++;     
    }
    if(k!=0 && n%2!=0 && s[n/2]!='9')s[n/2]='9';
    return s;    
}

int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    cout<<findLargest(s,k);
}