#include<bits/stdc++.h>
using namespace std;
long long q,t;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("nangluong.inp","r",stdin);freopen("nangluong.out","w",stdout);
	cin>>q;
	while(q--){
		cin>>t;
		long long m=t*2;
		long long n=sqrt(m);
		if(n*(n+1)/2>=t) cout<<n<<'\n';
		else cout<<n+1<<'\n';
	}
}