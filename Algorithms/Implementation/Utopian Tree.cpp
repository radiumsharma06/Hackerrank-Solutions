#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int func(int n){
    int x=1,i=1;
    while(n--){
        if(i%2==1)
        x=x*2;
        else if(i%2==0)
        x=x+1;
         i++;
    }
    return x;
}

int main(){
    int t,n;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++){
        cin>>n;
        a[i]=func(n);
    }
    for(int i=0;i<t;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
