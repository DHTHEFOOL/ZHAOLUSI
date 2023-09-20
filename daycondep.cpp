#include<bits/stdc++.h>
using namespace std;
long long n;
string a;
const long long N=1e6+6;
long long f[N],ans;
map<long long,long long> mp;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	cin>>a;
	a=" "+a;
	f[0]=0;
	mp[0]=1;
	for(long long i=1;i<=n;i++){
		f[i]=f[i-1]+a[i]-'0';
			ans+=mp[f[i]-i];
		mp[f[i]-i]++;
	
		//cout<<f[i]<<' ';
	}
	cout<<ans;
	
}