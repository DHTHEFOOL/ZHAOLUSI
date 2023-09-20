#include<bits/stdc++.h>
using namespace std;
long long n,dem;
long long a[25],b[25],c[25];
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	while(cin>>n){
		long long ans=1;
		for(long long i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+1+n);
		for(long long i=1;i<=n;i++){
			cin>>b[i];
			long long l=1,r=n,mid;
			while(l<=r){
				mid=(l+r)/2;
				if(a[mid]<=b[i]){
					dem=mid;
					l=mid+1;
				}else r=mid-1;
			}
			c[i]=dem;
		//	cout<<c[i]<<' ';
		}
		sort(c+1,c+1+n);
		for(long long i=1;i<=n;i++){
			ans*=(c[i]-(i-1));
		}
		cout<<ans<<'\n';
	}
}