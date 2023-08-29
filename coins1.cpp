#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
pair<int,int>f[1000001];
vector<int>vt;
long long n,k;
int main()
{
	ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    freopen("coins1.Inp","r",stdin);freopen("coins1.Out","w",stdout);
cin>>n>>k;
for(int i=1;i<=n;i++)
{cin>>f[i].fi;f[i].se=-1*(i);}
sort(f+1,f+1+n);
for(int i=n;i>=n-k+1;i--)
{
    vt.push_back(-1*(f[i].se));
}
sort(vt.begin(),vt.end());
for(int i=0;i<vt.size();i++)
cout<<vt[i]<<" ";
}
