#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    unsigned long long int sum=0,b[n];
    int flag=0;
    for(int i=0;i<n;i++)b[i]=1;
    for(int i=0;i<n;i++){
        int j=i; 
        if(a[j]>a[j+1]&&j<n-1){
            while(a[j]>a[j+1]&&j<n-1){
                b[i]++;j++;
            }
            for(int k=i+1;k<=j-1;k++){
                b[k]=b[k-1]-1;
            }
            flag=1;
        }
        if(a[i]>a[i-1]&&i>0){
            b[i]=max(b[i-1]+1,b[i]);
        }
        if(flag==1){
            i=j-1;flag=0;
        }
    }
    for(int i=0;i<n;i++)sum+=b[i];
    cout<<sum<<endl;
    return 0;
}
