#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int r,c;
    cin>>r>>c;
    int diff=r-c;
    int sum=r+c; 
    int maxr=0,minr=n+1,maxc=0,minc=n+1;
    int mintr=n+1,maxbl=0,mintl=n+1,maxbr=0;
    int mintrv=min(n-r,n-c),maxblv=min(r-1,c-1),mintlv=min(n-r,c-1),maxbrv=min(r-1,n-c);
    for(int i=0;i<k;i++){
        int a,b;
        cin>>a>>b;
        if(a==r){
            if(b<c){
                if(b>maxr)maxr=b;
            }
            else if(b>c){
                if(b<minr)minr=b;
            }
        }
        else if(b==c){
            if(a<r){
                if(a>maxc)maxc=a;
            }
            else if(a>r){
                if(a<minc)minc=a;
            }
        }
        else if(a-b==diff){
             if(b>c){
                 if(b<mintr)mintr=b;
             }
            else{
                if(b>maxbl)maxbl=b;
            }
        }
        else if(a+b==sum){
            if(a>r){
                if(a<mintl)mintl=a;
            }
            else{
                if(a>maxbr)maxbr=a;
            }
        }
    }   
    int left,right,top,bottom,tr,bl,tl,br;
    left=c-1-maxr;right=minr-1-c;top=minc-1-r;bottom=r-1-maxc;tr=mintr-1-c;bl=c-1-maxbl;tl=mintl-1-r,br=r-1-maxbr;
    if(mintr==n+1)tr=mintrv;if(maxbl==0)bl=maxblv;if(mintl==n+1)tl=mintlv;if(maxbr==0)br=maxbrv;
    int total=left+right+top+bottom+tr+bl+tl+br;
    cout<<total;
    return 0;
}