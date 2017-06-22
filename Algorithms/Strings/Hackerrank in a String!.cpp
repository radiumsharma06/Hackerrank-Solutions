#include<iostream>
#include<string>
using namespace std;

int main(){
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        int n=s.length(),k=0;
        string a="hackerrank";

        for(int i=0;i<n;i++){
            if(k==10)break;
            if(a[k]==s[i])k++;
        }
        if(k==10)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}
