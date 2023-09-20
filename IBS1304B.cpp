	#include<bits/stdc++.h>
	using namespace std;
	long long a[100001],b[100001],ans=1e9,x;
	long long n,t;
	int main(){
		cin>>n;
		for(long long i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+1+n);
		cin>>t;
		while(t--){
			cin>>x;
			ans=1e9;
			long long l=1,r=n,mid;
			while(l<=r){
				mid=(l+r)/2;
				if(a[mid]<=x){
					ans=min(ans,abs(a[mid]-x));
					l=mid+1;			
						} else r=mid-1;
			}
			l=1,r=n,mid;
			while(l<=r){
				mid=(l+r)/2;
				if(a[mid]>=x){
					ans=min(ans,abs(a[mid]-x));
					r=mid-1;
				} else l=mid+1;
			}
			cout<<ans<<'\n';
		}
}