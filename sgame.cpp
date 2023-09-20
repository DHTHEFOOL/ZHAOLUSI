#include<bits/stdc++.h>
using namespace std;
long long n,ans=-1e9;
long long a[1000005],f[1000005][4];
int main(){
	freopen("sgame.Inp","r",stdin);
    freopen("sgame.Out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	cin>>n;
	for(long long i=1;i<=n;i++) cin>>a[i];
	f[1][a[1]%3]=a[1];
	for(long long i=2;i<=n;i++){
		if(a[i]%3==0){
			f[i][0]=max(f[i-2][0]+a[i],f[i-1][0]);
			f[i][1]=f[i-1][1];
			f[i][2]=f[i-1][2];
		}else if(a[i]%3==1){
			f[i][1]=max(f[i-2][2]+a[i],f[i-1][1]);
			f[i][0]=f[i-1][0];
			f[i][2]=f[i-1][2];
		} else {
			f[i][2]=max(f[i-2][1]+a[i],f[i-1][2]);
			f[i][0]=f[i-1][0];
			f[i][1]=f[i-1][1];
		}
	}
	cout<<max({f[n][0], f[n][1], f[n][2]});
}