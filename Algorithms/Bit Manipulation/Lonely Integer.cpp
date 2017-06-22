#include <iostream>
#include <algorithm>
using namespace std;
int lonelyinteger(int n) {
     
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-2;i++){
        if(a[i]==a[i+1]){
            i++;
        }
        else{
        	if(a[i+1]==a[i+2])
        	return a[i];
        	else
        	return a[i+1];
        }
        
   }
    return a[n-1];
}
int main() {
    int n;
    cin>>n;
    cout<<lonelyinteger(n);
    return 0;
}
