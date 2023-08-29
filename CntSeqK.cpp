#include<bits/stdc++.h>
using namespace std;
long long a[500005],n,d,ans,k,b[500005],t=1,dem;
map<long long,long long> mp;
int main(){
		ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
  freopen("CntSeqK.Inp","r",stdin);freopen("CntSeqK.Out","w",stdout);
cin>>n>>k;
for(long long i=1;i<=n;i++){
	cin>>a[i];
}
long long y=1;
long long x=0;
while(y<=n and x<=n-k+1){
	mp[a[y]]++;
	if(mp[a[y]]==1) dem++;
	if(dem>=k){
		while(dem>=k){
		//	x++;
			mp[a[x]]--;
			if(mp[a[x]]==0) dem--;
			x++;
		}
	//	ans+=x;
		x--;
		mp[a[x]]++;
		if(mp[a[x]]==1) dem++;
		ans+=x;
	}
	//cout<<"x= "<<x<<",y= "<<y<<",ans= "<<ans<<endl;
y++;
}
cout<<ans;
}



