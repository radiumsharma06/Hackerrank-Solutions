#include<iostream>
#include<algorithm>
using namespace std;

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int min=abs(a[1]-a[0]);
    for(int i=1;i<n-1;i++){
        int x=abs(a[i]-a[i+1]);
        if(x<min)min=x;
    }
    cout<<min;                  
    return 0;
}
