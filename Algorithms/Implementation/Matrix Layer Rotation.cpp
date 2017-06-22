#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display(vector<vector<unsigned long long int> >v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++)cout<<v[i][j]<<" ";
        cout<<endl;
    }
}

int main() {
    int m,n;
    unsigned long long int r;
    cin>>m>>n>>r;
    vector<vector<unsigned long long int> >v(m);
    for(int i=0;i<m;i++)for(int j=0;j<n;j++){
        unsigned long long int x;
        cin>>x;
        v[i].push_back(x);
    }
    int row=0,col=0;
    while(row<m && col<n){
        if(row+1==m || col+1==n)break;
        int x=r%(2*(m+n-2-row-col));
        while(x--){
            int prev,curr;
            prev=v[row][col+1];
            for(int i=row;i<m;i++){
                curr=v[i][col];
                v[i][col]=prev;
                prev=curr;
            }
            for(int i=col+1;i<n;i++){
                curr=v[m-1][i];
                v[m-1][i]=prev;
                prev=curr;
            }
            for(int i=m-2;i>=row;i--){
                curr=v[i][n-1];
                v[i][n-1]=prev;
                prev=curr;
            }
            for(int i=n-2;i>col;i--){
                curr=v[row][i];
                v[row][i]=prev;
                prev=curr;
            }
        }
        row++;col++;
        m--;n--;
    }
    display(v);
    return 0;
}
