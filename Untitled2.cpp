 #include<bits/stdc++.h>
using namespace std;
long long t,n;
const long long N=1e5+5;
long long a[N],f[N];
long long sum;
map<long long,long long>mp;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		long long ans=1e9;
		sum=0;
		long long dem=0;
		for(long long i=1;i<=n;i++){
			cin>>a[i];
			sum+=a[i];
			mp[a[i]]++;
		}
	//	cout<<sum<<'\n';
 	if(mp[0]==n){//2 2 3  7
			cout<<0<<'\n';
		}else{
			for(long long i=1;i<=sqrt(sum);i++){
				long long r=0,dem1=0,dem2=0;
				if(sum%i==0){
				for(long long j=1;j<=n;j++){
					r+=a[j];
					if(r==i){
						dem2++;
						r=0;
					} else if(r<i){
						dem1++;
					}else{
						break;
					}
				}
			}
		//	cout<<dem2<<'\n'<<dem1<<'\n';
			if(dem2==sum/i) ans=min(dem1,ans);
					r=0,dem1=0,dem2=0;
				if(i!=sum/i and sum%i==0){
				for(long long j=1;j<=n;j++){
					r+=a[j];
					if(r==sum/i){
						dem2++;
						r=0;
					} else if(r<sum/i){
						dem1++;
					}else{
						break;
					}
				}
			}
		//	cout<<dem2<<'\n'<<dem1<<'\n';
			if(dem2==i) ans=min(dem1,ans);
		}
		cout<<ans<<'\n';
	}
}
}