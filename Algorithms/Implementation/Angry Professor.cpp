#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
        }
        int x=0;
        for(int i=0;i<n;i++){
            if(a[i]<=0)x++;
        }
        if(x>=k)cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
    return 0;
}
