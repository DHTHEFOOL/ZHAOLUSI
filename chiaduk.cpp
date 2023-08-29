#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
int n,k,a[N],b[N],maxn,dem;
map<long long,long long> mp,ct;
vector<long long> vt;
void sangd(long long c){
	long long t=1;
	while(t*c+k<=maxn){
		mp[t*c+k]++;
		if(mp[t*c+k]>1) ct[c]++;
		t++;
}
}
int main(){
    //freopen("chiaduk.inp","r",stdin);freopen("chiaduk.out","w",stdout);
    cin>>n>>k;
    for(long long i=1;i<=n;i++){
    	cin>>a[i];
    	mp[a[i]]++;
    	if(mp[a[i]]==1) vt.push_back(a[i]);
    	if(a[i]==k) dem++;
}
sort(vt.begin(),vt.end());
maxn=vt[vt.size()-1];
if(dem==0){
for(long long i=0;i<vt.size();i++){
	sangd(vt[i]);
}
for(long long i=1;i<=n;i++){
	cout<<ct[a[i]]<<' ';
}
} else{
	long long dem1;
	for(long long i=0;i<vt.size();i++){
		if(vt[i]==k) dem1++;
		if(dem1==dem) ct[k]+=mp[vt[i]];
	sangd(vt[i]);
	cout<<vt[i]<<"= "<<ct[vt[i]]<<endl<<dem1;
}
}
for(long long i=1;i<=n;i++){
	cout<<ct[a[i]]<<' ';
}
cout<<dem;
}

