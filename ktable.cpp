#include<bits/stdc++.h>
using namespace std;
#define int long long

const long long mod = 1e9+7;

int a[1000005];

int n,m,k;

int getnum(int x){
	int s = 0;
	for(int i=1; i<=n; i++){
		int j = x/i;
		s+= min(j, m);
	}
	return s;
}

int solve(int n, int m, int k){
	if(n*m <=1000000){
		int dem = 0;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				dem++;
				a[dem] = i*j;
			}
		}
		sort(a+1, a+dem+1);
		return a[k];
	}
	int L=1, R = n*m, x, ans;
	while(L<=R){
		x = (L+R) / 2;
		int dx= getnum(x);
		if(dx < k){
			L = x+1;
		}
		else{
			ans = x;
			R = x-1;
		}
	}
	return ans;
}


signed main(){
	//freopen("KTable.inp","r",stdin);
//	freopen("KTable.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int test = 1;
	cin>>test;
	while(test--){
		cin>>n>>m>>k;
		cout<<solve(n,m,k)<<"\n";
	}
}