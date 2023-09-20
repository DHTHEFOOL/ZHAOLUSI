#include<bits/stdc++.h>
using namespace std;
int n,q,a[5005],f[5005][5005],l,r;
map<int,int> mp;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("query0.inp","r",stdin);
	freopen("query0.out","w",stdout);
cin>>n>>q;
for(int i=1;i<=n;i++){
	cin>>a[i];
	f[i][i]=0;
}
for(int i=1;i<n;i++){
	mp.clear();
	mp[a[i]]++;
	for(int j=i+1;j<=n;j++){
	 	f[i][j]=f[i][j-1]+mp[-a[j]];
	 	mp[a[j]]++;
		//cout<<"f["<<i<<"]["<<j<<"]= "<<f[i][j]<<endl;
	}
}
while(q--){
	cin>>l>>r;
	cout<<f[l][r]<<'\n';
}
}