#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int compare(string s,string c){
    for(int i=0;i<s.length();i++)
        if(s[i]>c[i])return 1;
        else if(c[i]>s[i])return 0;
        return 0;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    string s,c;
    cin>>s;
    vector<char>v;
    for(int i=0;i<s.length();i++)v.push_back(s[i]);
    next_permutation(v.begin(),v.end());
    c=s;
    for(int i=0;i<v.size();i++)s[i]=v[i];
    if(compare(s,c))    
    cout<<s<<endl;
    else cout<<"no answer"<<endl;    
    }
    return 0;
}
