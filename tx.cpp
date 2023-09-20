#include<bits/stdc++.h>
using namespace std;
int k,m,n;
const int p=-1000000000;
string s,t;
int f[2005][2005][15][2];
int main(){
		ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
	cin>>n>>m>>k;
	cin>>s>>t;
	s="+"+s+">";
	t="-"+t+"<";
	for(int i=0;i<=n;i++)
	for(int j=0;j<=m;j++)
	for(int d=0;d<=k;d++)
	for(int x=0;x<=1;x++)
		f[i][j][d][x]=p;
	f[0][0][0][0]=0;
	for(int i=0;i<=n;i++)
	for(int j=0;j<=m;j++)
	for(int d=0;d<=k;d++)
	for(int x=0;x<=1;x++){
		if(s[i+1]==t[j+1]){
			if(x==1){
				f[i+1][j+1][d][x]=max(f[i+1][j+1][d][x],f[i][j][d][x]+1);
			}
			f[i+1][j+1][d+1][1]=max(f[i+1][j+1][d+1][1],f[i][j][d][x]+1);
		}
		f[i+1][j][d][0]=max(f[i+1][j][d][0],f[i][j][d][x]);
		f[i][j+1][d][0]=max(f[i][j+1][d][0],f[i][j][d][x]);	
}
	int ans=max(f[n][m][k][1],f[n][m][k][0]);
	if(ans<0) cout<<-1;
	else cout<<ans;
}