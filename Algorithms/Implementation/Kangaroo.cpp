#include<iostream>
using namespace std;

int func(int x1,int v1,int x2,int v2){
    if(x1!=x2&&v2>=v1)return 0;
    //if(x1==x2)return 1;
    while(x2>x1){
        x1+=v1;
        x2+=v2;
        if(x2==x1)return 1;
    }
    return 0;
}

int main(){
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    int x=func(x1,v1,x2,v2);
    if(x)cout<<"YES";
    else cout<<"NO";
    return 0;
}