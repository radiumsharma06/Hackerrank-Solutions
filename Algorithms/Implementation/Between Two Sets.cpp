#include<iostream>
#include<vector>
using namespace std;


int checkb(vector<int>v,int x){
    for(int i=0;i<v.size();i++){
        if(v[i]%x!=0)return 0;
    }
    return 1;
}

int checka(vector<int>v,int x){
    for(int i=0;i<v.size();i++){
        if(x%v[i]!=0)return 0;
    }
    return 1;
}

int max(vector<int>v){
    int max=v[0];
    for(int i=1;i<v.size();i++){
        if(max<v[i])max=v[i];
    }
    return max;
}

int min(vector<int>v){
    int min=v[0];
    for(int i=1;i<v.size();i++){
        if(min>v[i])min=v[i];
    }
    return min;
}

int main(){
    int m,n;
    cin>>m>>n;
    vector<int>a(m),b(n);
    for(int i=0;i<m;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    int s=max(a);
    int f=min(b);
    int count=0;
    for(int i=s;i<=f;i++){
        if(checka(a,i) && checkb(b,i))count++;
    }
    cout<<count;
}