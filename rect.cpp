#include<bits/stdc++.h>
using namespace std;
long long t,m,n,f[100005][100005];
const long long modk=1e9+7;
int main(){
	cin>>t;
	while(t--){
		cin>>m>>n;
			for(long long i=1;i<=n;i++) f[0][i]=i;
		for(long long i=1;i<=m;i++) f[i][0]=i;
			for(long long i=1;i<=m;i++){
			for(long long j=1;j<=n;j++){
				f[i][j]=f[i-1][j]+f[i][j-1];
			}
		}
		cout<<f[m][n]<<'\n';
}
}