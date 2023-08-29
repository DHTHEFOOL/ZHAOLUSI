#include<bits/stdc++.h>
using namespace std;
const long long N=2e5+1;
int n,k,a[N],ans;
map<int,int>mp,ti;
int main(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
      freopen("sdivk2.inp", "r", stdin); freopen("sdivk2.out", "w", stdout);
      cin>>n>>k;
      for(int i=1;i<=n;i++){
      	cin>>a[i];
      	a[i] = (a[i]%k + k) % k; 
	  }
	  for(int i=1;i<=n;i++){
	  	  ans += mp[k - a[i]];
	  	  if(a[i] == 0) ans += mp[0];
	  	  mp[a[i]]++;
	  }
	  
	  cout<<ans;
}