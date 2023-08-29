#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
long long n,k,a[N],ans,dem;
map<long long,long long> b;
int main(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     freopen("subarrk.inp", "r", stdin); freopen("subarrk.out", "w", stdout);
   cin>>n>>k;
   	b[0]=1;
      for(long long i=1;i<=n;i++){
      	cin>>a[i];
      	a[i]=a[i]%k;
      	a[i] = (a[i] + k) % k; 
      	dem+=a[i];
      	dem=dem%k;
	 b[dem%k]++;
	 //if(a[i]%k==0) ans++;
	 if(b[dem]>1) ans+=(b[dem]-1);
}
cout<<ans;
}