#include<bits/stdc++.h>
using namespace std;
const long long N=1e7;
long long t;
string s;
map<char,long long> f;
void huhu(){
    f.clear();
    long long n=s.size();
    vector<char>a;

    long long ans=0;
    s=" "+s;
    for(long long i=1;i<=n;i++){
            long long c=(long long)s[i];
        f[c]++;
        if(f[c]%2!=0) a.push_back(s[i]);
        else{
            ans+=(a.size()-1);
            a.clear();
            f.clear();
        }
    }
    ans+=a.size();
    cout<<ans<<'\n';
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("stspect.Inp", "r", stdin);
    freopen("stspect.Out", "w", stdout);
cin>>t;
while(t--){
    cin>>s;
    huhu();
}
}
