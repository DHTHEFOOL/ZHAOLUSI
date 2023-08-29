#include<bits/stdc++.h>
using namespace std;
long long a[200005],n,dem1,ans,k;
map<long long,long long> mp;
int main(){
		ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
   freopen("kvalues.Inp","r",stdin);freopen("kvalues.Out","w",stdout);
  cin>>n>>k;
  for(long long i=1;i<=n;i++)cin>>a[i];
  dem1=1;
  mp[a[1]]=1;
  long long m=1;
  for(long long i=2;i<=n;i++){
  		if(mp[a[i]]==0){dem1++;}
  	mp[a[i]]++;
	if(dem1<k) continue;
	else if(dem1>=k){
		while(dem1!=k){ 
			mp[a[m]]--;	
			if(mp[a[m]]==0) dem1--;
			m++;
		}
		ans=max(ans,i-m+1);
	}
}
	    cout<<ans;
	  
}