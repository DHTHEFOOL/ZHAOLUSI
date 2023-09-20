#include<bits/stdc++.h>
using namespace std;
long long n,m,x,y,dem,f[100005];
pair<long long,long long> a[100005],b[100005];
int main(){
	cin>>n>>m>>x>>y;
	for(long long i=1;i<=n;i++){
		cin>>a[i].first;
		a[i].second=i;
	}
	for(long long i=1;i<=m;i++){
		cin>>b[i].first;
		b[i].second=i;
	}
	sort(a+1,a+1+n);
	sort(b+1,b+1+m);
	long long t=1;
	for(long long i=1;i<=n;i++){
		while(t<=m){
			if(b[t].first>a[i].first+y) break;
			if(b[t].first>=max(0LL,a[i].first-x) and a[i].first+y>=b[t].first){
				f[a[i].second]=b[t].second;
				dem++;
				t++;
				break;
			}
			t++;
		}
	}
	cout<<dem<<'\n';
	for(long long i=1;i<=n;i++){
		if(f[i]) cout<<i<<' '<<f[i]<<'\n';
			}
}
