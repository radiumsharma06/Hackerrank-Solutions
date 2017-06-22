#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,j=0;
    cin>>n;
    while(j<n){
    for(int i=0;i<n-1-j;i++)cout<<" ";
        for(int i=0;i<=j;i++)cout<<"#";
        cout<<endl;
        j++;
    }
    return 0;
}
