#include<iostream>
using namespace std;

void display(int *a,int n){
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
}

void swap(int *a,int *b){
    int t=*b;
    *b=*a;
    *a=t;
}

int split(int *a,int l,int r){
    int i=a[l],p=l+1,q=r;
        while(q>=p){
        while(a[p]<i)p++;
        while(a[q]>i)q--;
        if(q>p)swap(&a[p],&a[q]);
    }
    swap(&a[l],&a[q]);
    return q;
}

void quickSort(int *a,int l,int r){
    if(l<r){
        int pivot=split(a,l,r);
        quickSort(a,l,pivot-1);
        quickSort(a,pivot+1,r);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    quickSort(a,0,n-1);
    display(a,n);
}