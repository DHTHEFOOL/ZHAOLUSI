#include<bits/stdc++.h>
using namespace std;
long long n,m,k;
const long long N=500005;
long long a[N],b[N],f[N];
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("baitap.inp","r",stdin);freopen("baitap.out","w",stdout);
	cin>>n>>m;
	for(long long i=1;i<=n;i++) cin>>a[i];
	for(long long i=1;i<=m;i++) cin>>b[i];
	sort(b+1,b+1+m);
	cin>>k;
	for(long long i=1;i<=m;i++) f[i]=f[i-1]+b[i];
	for(long long i=1;i<=n;i++){
		long long l=1,r=m,t=-1;
		while(l<=r){
			long long mid=(l+r)/2;
			if(b[mid]<=a[i]){
			t=max(t,mid);
			l=mid+1;
		}
			else if(b[mid]>a[i]){
				r=mid-1;
			}
		}
	if(t != -1)
		cout<<f[t]-f[max(t-k,0LL)]<<'\n';
	    else cout << 0 << '\n';
		             
}  
}