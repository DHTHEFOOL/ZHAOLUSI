	#include<bits/stdc++.h>
	using namespace std;
	const long long modk=1e9+7;
	long long a,n;
	long long bipow(long long a,long long b){
		if(b==0) return 1;
		long long res=bipow(a,b/2)%modk;
		if(b%2==1) return ((res*res)%modk*a)%modk;
		else return (res*res)%modk;
	}
	int main(){
		ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
		cin>>a>>n;
	if(a==1) cout<<a*(n+1);
	else cout<<((bipow(a,n+1)-1)/(a-1))%modk;
	}