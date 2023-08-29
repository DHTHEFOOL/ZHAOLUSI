#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
long long n,d,a[N],dem,ans=-1e9;
map<long long,long long>mp,f;
int main(){
ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
freopen("congsaid.Inp","r",stdin);freopen("congsaid.Out","w",stdout);
cin>>n>>d;
for(int i=1;i<=n;i++){
 cin>>a[i];
 mp[a[i]]++;
 }
 if(n==1) cout<<0;
 else{
 f[a[1]]=1;
for(long long i=2;i<=n;i++){
	if(mp[a[i]-d]!=0){
		f[a[i]]=f[a[i]-d]+1;
	}
	else{f[a[i]]=1;}
	ans=max(ans,f[a[i]]);
}
cout<<n-ans;
}
}
