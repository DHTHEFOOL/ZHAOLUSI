#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
long long n,q,a[N],x,b[N];
int main(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
      freopen("solanxuathien.inp", "r", stdin); freopen("solanxuathien.out", "w", stdout);
     cin>>n;
     for(long long i=1;i<=n;i++){
        cin>>a[i];
        b[a[i]]++;
     }
     cin>>q;
     while(q--){
        cin>>x;
        cout<<b[x]<<'\n';
     }
    }
