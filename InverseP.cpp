#include<bits/stdc++.h>
using namespace std;
long long l,a,p,k;
long long  sqr(long long  x) {
    return x*x;
}
long long  pow(long long  a, long long  b, long long  MOD)
{
    if (b == 0) return 1 % MOD;
    else
        if (b % 2 == 0)
            return sqr(pow(a, b/2,MOD)) % MOD;
        else
            return a * (sqr(pow(a, b/2,MOD)) % MOD) % MOD;
}
int main()
{
     ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("INVERSEP.inp", "r", stdin);freopen("INVERSEP.out", "w", stdout);
    cin>>l;
    while(l--){
        cin>>a>>p;
        cout<<pow(a,p-2,p)<<'\n';
    }
}