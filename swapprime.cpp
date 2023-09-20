#include<bits/stdc++.h>
using namespace std;
long long n,a[105],ans;
const long long N=1e6+5;
bool f[N];
long long used[20],x[20];
long long t;
long long b[20],dem;
void sang(){
	memset(f,true,sizeof(f));
	f[0]=f[1]=false;
	for(long long i=2;i<=sqrt(N);i++){
		if(f[i]==true){
		
		for(long long j=i*i;j<=N;j+=i){
			f[j]=false;
		}
	}
	}
}
void xuly(){
	long long tinh=0;
	for(long long i=1;i<=t;i++){
		 tinh=tinh*10+x[i];
	}	
	if(f[tinh]) dem=1;
}
void check(long long h){
	for(long long i=1;i<=t;i++){	
		if(used[i]==0)
		{
			x[h]=b[i];
			used[i]=1;
			if(h==t)xuly();
			
			else check(h+1);
		used[i]=0;
	}
}
}
void solve(long long g){
	memset(used,0,sizeof(used));
	t=0,dem=0;
	while(g>0){
		b[++t]=g%10;
		g/=10;
	}
	check(1);
	ans+=dem;
}
int main(){
	 ios::sync_with_stdio();cin.tie(0);cout.tie(0);
   // freopen("swapprime.INP","r",stdin);freopen("swapprime.OUT","w",stdout);
    cin>>n;
    sang();
    for(long long i=1;i<=n;i++){
    	cin>>a[i];
   if(f[a[i]]) ans++;
   else{
   	solve(a[i]);
   }
   }
   cout<<ans;
}
