#include<bits/stdc++.h>
using namespace std;
long long n,q;
long long a[150001],i,j,sum,b[150001],c[150001],ans;
map<long long,long long> mp,ct;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		c[i]=a[i];
}
	sort(a+1,a+1+n);
	for(long long i=1;i<=n;i++){
		sum+=i*a[i];
		b[i]=b[i-1]+a[i];
		ct[a[i]]++;
		if(ct[a[i]]==1) mp[a[i]]=i;
	}
 
	cin>>q;
	while(q--){
		cin>>i>>j;
		long long l=1,r=n,mid,t=1e9;
		while(l<=r){
			mid=(l+r)/2;
			if(a[mid]>j){
				t=min(t,a[mid]);
				r=mid-1;
			} else l=mid+1;
		}
		if(t==1e9) mp[t]=n+1;
	if(j==c[i]){
		ans=sum;
		cout<<ans<<'\n';
	}
	else if(j>c[i]) {
		if(mp[t]!=mp[c[i]]){
		ans=sum-c[i]*mp[c[i]]+(mp[t]-1)*j-b[mp[t]-1]+b[mp[c[i]]];
		cout<<ans<<'\n';
	}
		else {
		ans=sum-c[i]*mp[c[i]]+j*mp[c[i]];
		cout<<ans;
	}
}
	else if(j<c[i]){
		if(mp[t]==mp[c[i]]){
		 ans=sum-c[i]*mp[c[i]]+j*mp[c[i]];
		 cout<<ans<<'\n';
		 }
		else {
		ans=sum-c[i]*mp[c[i]]+mp[t]*j-b[mp[t]-1]+b[mp[c[i]]-1];
		cout<<ans<<'\n';
	}
	}
}
}