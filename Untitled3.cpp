#include<bits/stdc++.h>
using namespace std;
long long t,n;
const long long N=1e5+5;
long long a[N],f[N];
long long sum;
long long mp[N];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		long long ans=1e9;
		sum=0;
		memset(f,0,sizeof(f));
		memset(mp,-1,sizeof(mp));
		for(long long i=1;i<=n;i++){
			cin>>a[i];
			sum+=a[i];
			f[i]=f[i-1]+a[i];
			mp[f[i]]=i;
		}
		mp[0]=0;
		for(long long i=1;i<=sqrt(sum);i++){
			long long d=0;
			if(sum%i==0){
				long long t=0;
				long long dem=0;
				while(t*i<=sum){
					if(mp[t*i]!=-1){
						dem++;
					d+=(mp[t*i]-mp[(t-1)*i]-1);
					}else{
						if(t==0) d+=(mp[t*i]-1);
						else break;
					}
					t++;
				}
				if(dem==n/i) ans=min(ans,d);
			}if(sum/i!=i){
				long long t=0;
				long long dem=0;
				while(t*(sum/i)<=sum){
					if(mp[t*(sum/i)]!=-1){
					dem++;
					d+=(mp[t*(sum/i)]-mp[(t-1)*(sum/i)]-1);
				}
				
					else {
						if(t==0) d+=(mp[t*(sum/i)]-1);
						else break;
					}
						t++;
			}
			if(dem==i) ans=min(ans,d); 
		}
	}
	cout<<ans<<'\n';
}
}