#include<iostream>
#include<map>
using namespace std;


int main(){
    int n,x;
    cin>>n;
    map<int,int>hm;
    for(int i=0;i<n;i++){
        cin>>x;
        hm[x]++;
    }
    int count=0;
    map<int,int>::iterator it;
    for(it=hm.begin();it!=hm.end();it++){
        count+=it->second/2;
    }
    cout<<count;
    return 0;
}
