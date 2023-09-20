#include<bits/stdc++.h>
using namespace std;
long long n,f[1000001],a[1000001],k;
const long long modk=1e9+7;
int main(){
		 ios::sync_with_stdio();cin.tie(0);cout.tie(0);
    freopen("binaryk.INP","r",stdin);freopen("binaryk.OUT","w",stdout);
    cin>>n>>k;
    if(k==1) cout<<1;
    else{
    a[0]=1;
    f[1]=2;
    a[1]=1;
    for(long long i=2;i<k;i++){
    	f[i]=f[i-1]*2;
    	f[i]=(f[i]+modk)%modk;
    	a[i]=(f[i-1]+modk)%modk;
	}
    for(long long i=k;i<=n;i++){
    	f[i]=f[i-1]*2-a[i-k];
    	f[i]=(f[i]+modk)%modk;
    	a[i]=(f[i-1]+modk)%modk;
	}
	cout<<(f[n]+modk)%modk;
}
}
    
   