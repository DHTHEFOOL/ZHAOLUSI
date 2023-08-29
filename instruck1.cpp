#include<bits/stdc++.h>
using namespace std;
const long long Mod=1e9+7;
long long a,b;
long long check(long long n)
{
    long long s=0,dem=0,gt=0;
    while(gt+1+dem<=n)
    {
        gt++;
        dem+=gt;
        s+=gt*gt;
        s=(s+Mod)%Mod;
    }
    gt++;
    s+=(n-dem)*gt;
    s=(s+Mod)%Mod;
    return s;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("InStruck1.inp", "r", stdin); freopen("InStruck1.out", "w", stdout);
    cin>>a>>b;
    long long sum=check(b)-check(a-1);
    cout<<(sum+Mod)%Mod;
}
