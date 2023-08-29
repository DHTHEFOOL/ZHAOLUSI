	#include<bits/stdc++.h>
	using namespace std;
	int a[200002], b[200002], m, n, dem1, dem2;
	long long k, ans;
	map<long long, int> mp;
	int main() {
		ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
	 freopen("tichK.Inp","r",stdin);freopen("tichK.Out","w",stdout);
	  cin>> n >> m;
	  for(int i = 1; i <= n; i++) {
	  cin>> a[i];
	  if(a[i]==0) dem1++;
	}
	  for(int i=1; i<=m; i++) {
	  cin>> b[i];
	  if(b[i] == 0) dem2++;
	}
	  cin>>k;
	  if(k==0) {
	  	ans = dem1 * m + dem2 * n-dem1*dem2;
	} else {
	  for(int i=1; i<=n; i++) {
	  	if(a[i] == 0) continue;
	  	else if(k % a[i] == 0) mp[k/a[i]]++;
	  }  
	  for(int i=1; i<=m; i++) {
	  		if(b[i] == 0) continue;
	  	else if(mp[b[i]] != 0) ans += mp[b[i]];
	  }
}
	  cout<<ans;
	  
	  }