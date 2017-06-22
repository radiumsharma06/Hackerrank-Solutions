#include<iostream>
using namespace std;

int main(){
int n,m;
cin>>n>>m;
int a[m];
for(int i=0;i<m;i++)cin>>a[i];
long int t[n+1]={0};
t[0]=1;    
for(int i=0;i<m;i++){
for(int j=a[i];j<=n;j++){
t[j]+=t[j-a[i]];
}
}
cout<<t[n];
}