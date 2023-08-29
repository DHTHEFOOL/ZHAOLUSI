#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int m,n,a[N],b[N],f[N];
vector<int> vt;
int main(){
    freopen("flower.inp","r",stdin);freopen("flower.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=m;i++){
	cin>>b[i];
	vt.push_back(b[i]);
}
	sort(vt.begin(),vt.end());
int l=1;
	for(int i=0;i<vt.size();i++){
		if(vt[i]>a[l]){
			while(vt[i]>a[l]) l++;
	
		}
				f[vt[i]]=n-l+1;
	}
	for(int i=1;i<=m;i++){
		if(a[n]<b[i]) cout<<0<<' ';
		else cout<<f[b[i]]<<' ';
	}	
}