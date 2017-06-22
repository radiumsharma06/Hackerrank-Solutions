#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int min=100000,flag=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                flag=1;
                int dis=abs(i-j);
                if(dis<min)min=dis;
            }
        }
    }
    if(flag==0)min=-1;
    cout<<min;
}