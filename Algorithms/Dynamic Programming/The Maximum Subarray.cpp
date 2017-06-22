#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Contiguous(int *a,int n){
    int c=0,m2=0;
    for(int i=0;i<n;i++)if(a[i]<0)c++;
    if(c==n){
        m2=a[0];
        for(int i=1;i<n;i++)if(a[i]>m2)m2=a[i];
         return m2;   
    }
    int m1=0;
    for(int i=0;i<n;i++){
        m1=m1+a[i];
        if(m1<0)m1=0;
        if(m2<m1)m2=m1;    
    }
    return m2;
}

int NonContiguous(int *a,int n){
    int max=0,flag=0;   
    for(int i=0;i<n;i++){
           if(a[i]>0){
               max+=a[i];
               flag=1;
           }
       }
    if(flag==0){
        max=a[0];
        for(int i=1;i<n;i++)if(a[i]>max)max=a[i];
    }
        return max;
}

int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        cout<<Contiguous(a,n)<<" "<<NonContiguous(a,n)<<endl;
    }
    return 0;
}
