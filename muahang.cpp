#include<bits/stdc++.h>
using namespace std;
long long ans,t,a,b,m,n;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("muahang.inp","r",stdin);
	freopen("muahang.out","w",stdout);
	cin>>t;
	while(t--){
		ans=0;
		cin>>a>>b>>m>>n;
			if(a*m<b*(m+1)){
				ans+=a*(n/(m+1))*m;
				long long t=(n/(m+1))*m+n/(m+1);
				ans+=(n-t)*min(a,b);
		}else {
			ans+=n*min(a,b);
		}
		cout<<ans<<'\n';
	
	}
	}