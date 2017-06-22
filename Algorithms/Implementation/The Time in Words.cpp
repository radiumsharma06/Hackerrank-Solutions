#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int h,m;
	cin>>h>>m;
	string s[]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve"};
	string r[]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen",
	"fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four",
	"twenty five","twenty six","twenty seven","twenty eight","twenty nine"};
	if(m==0){
		cout<<s[h-1]<<" o' clock";
	}
	else if(m==1){
		cout<<"one minute past "<<s[h-1];
	}
    else if(m==15){
		cout<<"quarter past "<<s[h-1];
	}
	else if(m>1&&m<30){
		cout<<r[m-1]<<" minutes past "<<s[h-1];
	}
	else if(m==30){
		cout<<"half past "<<s[h-1];
	}
	else if(m==45){
		cout<<"quarter to "<<s[h];
	}
	else if(m>30){
		cout<<r[59-m]<<" minutes to "<<s[h];
	}
}