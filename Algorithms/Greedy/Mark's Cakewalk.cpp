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
    long int total=0;
    for(int i=n-1;i>=0;i--)total+=pow(2,n-1-i)*a[i];
    cout<<total;
    return 0;
}
