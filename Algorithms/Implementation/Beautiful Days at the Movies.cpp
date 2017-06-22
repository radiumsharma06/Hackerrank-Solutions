#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long int reverse(long int x){
    long int rev=0,i=1;
    while(x>0){
        long int a=x%10;
        rev=rev*10+a;
        x/=10;
    }
    while(rev%10==0)rev/=10;
    return rev;
}

long int check(long int x,long int k){
    long int rev=reverse(x);
    if(abs(x-rev)%k==0)return 1;
    return 0;
}

int main() {
    long int l,r,k;
    cin>>l>>r>>k;
    long int count=0;
    for(long int i=l;i<=r;i++)if(check(i,k))count++;
    cout<<count;
    return 0;
}