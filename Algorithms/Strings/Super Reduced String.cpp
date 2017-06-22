#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string s;
    cin>>s;
    int n=s.length();
    while(n--){
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            s.erase(i,2);
        }
        if(s.length()==0)break;
    }
        if(s.length()==0)break;
    }
    if(s.length()>0)
    cout<<s;
    else cout<<"Empty String";
    return 0;
}
