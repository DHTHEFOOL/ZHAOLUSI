#include<bits/stdc++.h>
using namespace std;
const long long modk=1e9+7;
long long n,k,f[100005];
int main(){
	ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    freopen("STAIR3.Inp","r",stdin);freopen("STAIR3.Out","w",stdout);
    cin>>n>>k;
    f[0]=1;
        for(long long j=1;j<=k;j++)
           for(long long i=j;i<=n;i++)
                f[i]+=f[i-j]%modk;
	cout<<f[n]%modk;
}
