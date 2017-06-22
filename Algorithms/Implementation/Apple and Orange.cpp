#include<iostream>
using namespace std;


int main(){
    int s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;
    int apple[m],orange[n];
    for(int i=0;i<m;i++)cin>>apple[i];
    for(int i=0;i<n;i++)cin>>orange[i];
    int count1=0,count2=0;
    for(int i=0;i<m;i++){
        if(apple[i]<0)continue;
        if(a+apple[i]>=s && a+apple[i]<=t)count1++;
    }
    for(int i=0;i<n;i++){
        if(orange[i]>0)continue;
        if(b+orange[i]>=s && b+orange[i]<=t)count2++;
    }
    cout<<count1<<endl<<count2;
    return 0;
}
