#include<iostream>
using namespace std;

int main(){
    int n,k,e=100;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int j=0;
    do{
        j=(k+j)%n;
        if(a[j]==1)e-=2;
        e--;
    }
    while(j!=0);
        cout<<e<<endl;
    return 0;
}
