#include<bits/stdc++.h>
using namespace std;
const long long N=1e7;
long long t,l,r;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("modmax.Inp", "r", stdin);
    freopen("modmax.Out", "w", stdout);
cin>>t;
while(t--){
    cin>>l>>r;
    if(l==r) cout<<0<<'\n';
    else{
        long long a=r/2;
        if(l<=a){
            if(r%2==0) cout<<a-1<<'\n';
            else cout<<a<<'\n';
        }
        else cout<<r-l<<'\n';
    }
}
}
