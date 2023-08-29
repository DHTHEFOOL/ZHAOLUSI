#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
long long n,k,a[N],f[N],ans=-1e7;
int main()
{
	ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    freopen("coins2.Inp","r",stdin);freopen("coins2.Out","w",stdout);
    cin>>n;
    for(long long i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    f[1]=a[1];
    for(long long i=2;i<=n;i++){
        f[i]=a[i]*(n-i+1);
        ans=max(f[i],ans);
    }
    cout<<ans;
}
