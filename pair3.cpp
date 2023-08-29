#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
long long n,a[N],f[N],dem,ans;
int main(){
ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
freopen("pair3.Inp","r",stdin);freopen("pair3.Out","w",stdout);
cin>>n;
for(long long i=1;i<=n;i++){
    cin>>a[i];
}
sort(a+1,a+1+n);
f[1]=0;
	dem=1;
	for(long long i=2;i<=n;i++){
		if(a[i]==a[i-1]) dem++;
		else{
			f[i-1]=(i-1-dem)*dem;
			dem=1;
		}
	}
	for(long long i=2;i<=n;i++)
	{
		ans+=f[i]*(n-i);
	}
	cout<<ans;
}
