#include <queue>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void display(int s,vector<int>ans){
    for(int i=0;i<ans.size();i++)if(i!=s)cout<<ans[i]<<" ";
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,e,s;
        cin>>n>>e;
        vector<vector<int> >v(n);
        while(e--){
            int a,b;
            cin>>a>>b;
            v[a-1].push_back(b-1);
            v[b-1].push_back(a-1);
        }
        cin>>s;
        vector<int>ans(n,-1),vis(n,0),y(n,0);
        queue<int>q;
        q.push(s-1);
        vis[s-1]=1;
        y[s-1]=6;
        vector<int>::iterator it;
        while(!q.empty()){
            for(it=v[q.front()].begin();it!=v[q.front()].end();it++){
                if(!vis[*it]){
                    vis[*it]=1;
                    ans[*it]=y[q.front()];
                    y[*it]=y[q.front()]+6;
                    q.push(*it);
                }
            }
            q.pop();
        }
        display(s-1,ans);
    }
    return 0;
}
