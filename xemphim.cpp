#include<bits/stdc++.h>
using namespace std;
long long n,k,ans;
long long d[100005];
int main(){
	cin>>n>>k;
	for(long long i=1;i<=n;i++) cin>>d[i];
	ans=k+1;
	long long t=d[1];
	for(long long i=2;i<=n;i++){
		ans+=min(k+1,d[i]-t);
		t=d[i];
	}
	cout<<ans;
}