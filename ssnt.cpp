 #include<bits/stdc++.h>
 using namespace std;
 long long n,m,t;
 void xuly(long long l,long long r){
 	bool a[r-l+1];
 	for(long long i=0;i<=r-l+1;i++) a[i]=true;
 	for(long long i=2;i<=sqrt(r);i++){
 		for(long long j=max(i*i,((l+i-1)/i)*i);j<=r;j+=i){
 			a[j-l]=false;
		 }
	 }
	// long long x=2;
	 for(long long i=max(2LL,l);i<=r;i++){
	 	if(a[i-l]) cout<<i<<'\n';
	 }
 }
 int main(){
 	cin>>t;
 	while(t--){
 		cin>>n>>m;
 		xuly(n,m);
	 }
 }