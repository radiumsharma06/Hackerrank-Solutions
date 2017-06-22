#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,m,n;
    cin>>t;
    
    for(int i=0;i<t;i++){
        cin>>m>>n;
        int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        int sum=0,flag=0,x,y;
        for(int k=0;k<n;k++){
        for(int j=k+1;j<n;j++){
            sum=a[k]+a[j];
                if(sum==m){
                 x=k+1;
                 y=j+1;
                flag=1;
                break;
            }
        }
            if(flag==1)
                break;
       }
        cout<<x<<" "<<y<<endl;
    }
}
