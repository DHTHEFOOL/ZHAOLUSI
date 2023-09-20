#include<bits/stdc++.h>
using namespace std;
long long n,a[200005];
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("ds0.inp","r",stdin);
	freopen("ds0.out","w",stdout);
cin>>n;
long long dem=0;
for(long long i=1;i<=n;i++){
	cin>>a[i];
	if(a[i]==1) dem++;
}
if(dem%2==0) cout<<dem/2+n-dem;
else cout<<dem/2+1+n-dem;
}