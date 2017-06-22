#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a=5,sum=0;
    for(int i=0;i<n;i++){
        sum+=a/2;
        a=(a/2)*3;
    }
    cout<<sum;
    return 0;
}
