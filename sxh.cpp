#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int n,q,a[N],x;
map<int,int>b;
int main(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     // freopen("sxh.inp", "r", stdin); freopen("sxh.out", "w", stdout);
     cin>>n;
     for(int i=1;i<=n;i++){
        cin>>a[i];
        b[a[i]]++;
     }
     cin>>q;
     while(q--){
        cin>>x;
        cout<<b[x]<<'\n';
     }
    }
