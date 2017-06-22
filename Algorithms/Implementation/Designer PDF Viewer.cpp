#include<map>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;


int main(){
    map<char,int>hm;
    for(int i=0;i<26;i++){
        int x;
        cin>>x;
        char c='a'+i;
        hm[c]=x;
    }
    string word;
    cin>>word;
    int n=word.length();
    int max=0;
    for(int i=0;i<n;i++){
        int x=hm[word[i]];
        if(max<x)max=x;
    }
    cout<<max*n;
    return 0;
}
