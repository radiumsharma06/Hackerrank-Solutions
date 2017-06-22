#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int max=0;
    while(n--){
        int x;
        cin>>x;
        if(x>max)max=x;
    }
    int ans=max-k;
    if(ans<0)ans=0;
    cout<<ans;
}