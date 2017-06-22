#include<iostream>
using namespace std;


int main(){
   int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int s=0,j=0;
    while(j!=n-1){
        if(a[j+2]==0&&j<n-2)j+=2;
        else j+=1;
        s++;
    }
    cout<<s<<endl;
    return 0;
}
