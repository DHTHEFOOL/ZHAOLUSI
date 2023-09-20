#include<bits/stdc++.h>
using namespace std;
long long n,t,q;
const long long N=1e6;
long long a[N],b[N];
const long long M=1e7+7;
long long f[M];
map<long long,long long> mp;
void snt(){
	for(long long i=2;i<=sqrt(M);i++){
		if(f[i]==0)
		for(long long j=i*i;j<=M;j+=i){
			if(f[j]==0)
			f[j]=i;
		}
	}
	for(long long i=2;i<=M;i++){
		if(f[i]==0) f[i]=i;
	}
}	
int main(){
	cin>>n>>t;
	snt();
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		b[i]=(1+f[a[i]])*(1+f[a[i]]); 
}
	while(t--){
		cin>>q;
		mp.clear();
		long long ans=0,j=0;	
		for(long long i=1;i<=n;i++){
			while(j<=n && (mp.empty() ||(*mp.rbegin()).first - (*mp.begin()).first <= q)){
				j++;
				mp[b[j]]++;
			}
		//	cout<<"j= "<<j<<",i= "<<i<<'\n';
			ans=max(ans,j-i);
			mp[b[i]]--;
			if(mp[b[i]]==0) mp.erase(b[i]);
		}
			cout<<ans<<'\n';
	}

}

