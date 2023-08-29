#include<bits/stdc++.h>
using namespace std;
long long t,dem,ans;
string s;
map<char,long long> mp;
int main(){
      ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("xau.inp", "r", stdin); freopen("xau.out", "w", stdout);
    cin>>t;
    while(t--){
            dem=0;
        mp.clear();
        cin>>s;
        long long x=s.size();
        s=' '+s;
        for(long long i=1;i<=x;i++){
            mp[s[i]]++;
        }
        for(long long i=1;i<=x;i++){
            if(mp[s[i]]==1){cout<<i;dem++;break;}
    }
    if(dem==0) cout<<-1;

    cout<<'\n';
}
}
