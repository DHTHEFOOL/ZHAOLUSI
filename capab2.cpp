#include<bits/stdc++.h>
using namespace std;
long long t,dema,demb,ans;
string s;
int main(){
      ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
      freopen("capab2.inp", "r", stdin); freopen("capab2.out", "w", stdout);
    cin>>s;
    long long x=s.size();
    for(long long i=0;i<x;i++){
        if(s[i]=='A') {ans+=dema*demb;dema++;demb=0;}
         if(s[i]=='B') demb++;

    }
ans+=dema*demb;
    cout<<ans;
}
