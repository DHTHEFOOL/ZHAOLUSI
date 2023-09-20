#include<bits/stdc++.h>
using namespace std;
long long l,r,ans;
const long long N=1e5+5;
long long s[N];
int main(){
	cin>>l>>r;
		for(long long i=1;i<=r;i++) s[i]=1;
	for(long long i=2;i<=r/2;i++){
		long long z=i+i;
		while(z<=r){
			s[z]+=i;
			z+=i;
		}
	}
	for(long long i=l;i<=r;i++){
		if(s[i]>i){
		ans++;
	//	cout<<i<<' '<<s[i]<<'\n';
	}
}
	cout<<ans;
}