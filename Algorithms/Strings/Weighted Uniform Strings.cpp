#include<iostream>
#include<string>
#include<map>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    map<int,int>hm;
    int l=s.length();
    for(int i=0;i<l;i++){
        char c=s[i];
        int j=i,sum=0;
        while(s[j]==c && j<l){
            sum+=c-96;
            hm[sum]=1;
            j++;
        }
        i=j-1;
    }
    while(n--){
        int x;
        cin>>x;
        if(hm[x]==1)cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
}