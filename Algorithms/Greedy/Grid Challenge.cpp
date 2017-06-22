#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string check(vector<vector<char> >v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size()-1;j++)if(v[j][i]>v[j+1][i])return "NO";
    }
    return "YES";
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<char> >v(n);
        for(int i=0;i<n;i++)for(int j=0;j<n;j++){
            char c;
            cin>>c;
            v[i].push_back(c);
        }
        for(int i=0;i<n;i++)sort(v[i].begin(),v[i].end());
        cout<<check(v)<<endl;
    }
    return 0;
}
