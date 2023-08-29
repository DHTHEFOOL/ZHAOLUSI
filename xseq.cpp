#include<bits/stdc++.h>
using namespace std;
long long n,x,a[300005],s[300005],pre[300005],suf[300005],ans,ma;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("XSEQ.inp","r",stdin);freopen("XSEQ.out","w",stdout);
	cin>>n>>x;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s[i]=s[i-1]+a[i];
		pre[i]=max(pre[i-1]+a[i],a[i]);
	}
	for(int i=n;i>=1;i--)
		suf[i]=max(suf[i+1]+a[i],a[i]);
	for(int i=1;i<=n;i++)
	{
		ans=max(ans,max(suf[i+1],0LL)+s[i]*x+ma);
		ma=max(ma,max(pre[i],0LL)-s[i]*x);
	}
	cout<<ans;
}
