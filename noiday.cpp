#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long u,v;
const long long N=1e7;
vector<long long> vt[N];
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("noiday.INP","r",stdin);freopen("noiday .OUT","w",stdout);
    cin>>n>>m;
    for(long long i=1;i<=m;i++){
        cin>>u>>v;
        vt[u].push_back(v);
        vt[v].push_back(u);
    }

    for(long long i=1;i<=n;i++){
                sort(vt[i].begin(),vt[i].end());
                cout<<vt[i].size()<<' ';
               for(auto x : vt[i]) cout<<x<<' ';


cout<<'\n';
    }
    }


