#include<iostream>
using namespace std;

int main(){
   unsigned long long int t;
    cin>>t;
    unsigned long long int x,y=1;
    unsigned long long int ans=3;
        while(t>ans+y-1){
            y=y+ans;
            ans*=2;
        } 
    ans-=t-y;   
    cout<<ans;
    return 0;
}