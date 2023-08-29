#include<bits/stdc++.h>
using namespace std;
int n,k,f[1000005];
int main()
{
	ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    freopen("STAIR2.Inp","r",stdin);freopen("STAIR2.Out","w",stdout);
	cin>>n;
    f[0]=1;
	for(int j=1;j<=3;j++)
	   for(int i=j;i<=n;i++)
	      	f[i]+=f[i-j];
	cout<<f[n];
}
