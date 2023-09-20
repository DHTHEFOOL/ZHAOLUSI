#include<bits/stdc++.h>
using namespace std;
int n,k,b;
int f[1000001],ans,j;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>k>>b;
	ans=n;
	while(b--){
		cin>>j;
		f[j]++;
	}
	for(int i=1;i<=n;i++){
		if(f[i]==0) f[i]=f[i-1];
		else f[i]=f[i-1]+1;
		cout<<f[i]<<' ';
	}
	cout<<'\n';
	for(int i=1;i<=n-k+1;i++){
		ans=min(ans,f[i+k-1]-f[i-1]);
	//	cout<<f[i+k-1]-f[i]<<' ';
	}
	cout<<ans;
}