#include<bits/stdc++.h>
using namespace std;
long long a[100005],n,m,f[100005],ans,dem=-1e9;
int main(){
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		f[i]=f[i-1]+a[i];
	}
	for(long long i=1;i<=n;i++){
		long long l=i,r=n,mid,dem=-1e9;
		while(l<=r){
			mid=(l+r)/2;
			if(f[mid]-f[i-1]<=m){
			dem=max(dem,mid);
			l=mid+1;
		}else r=mid-1;
	}
	if(dem!=-1e9) ans+=(dem-i+1);
}
cout<<ans;
}