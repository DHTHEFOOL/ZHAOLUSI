#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],k[200005],m[200005],l,r;
int main(){
	 ios::sync_with_stdio();cin.tie(0);cout.tie(0);
    freopen("product.INP","r",stdin);freopen("product.OUT","w",stdout);
	cin>>n;
	long long posma,ma=-3;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		if(ma<a[i]){
			ma=a[i];
			posma=i;
		}
		if(a[i]<0) k[i]=k[i-1]+1;
		else k[i]=k[i-1];
		if(abs(a[i])==2) m[i]=m[i-1]+1;
		else m[i]=m[i-1];
	}
	long long t=0,f=0; 
	for(long long i=1;i<=n;i++){
		if(a[i]==0){
			t=i;// vi tri so 0
			f=0;
		} 
		if(a[i]<0 and f==0){
			f=i;//vi tri so am gan nhat sau 0
		}
		long long h=k[i]-k[t];
		if(h%2==0){
			long long dem=m[r]-m[l-1];
			if(m[i]-m[t]>dem){
				l=t+1;
				r=i;
			}
		}else{
			long long dem=m[r]-m[l-1];
			if(m[i]-m[f]>dem){
				l=f+1;
				r=i;
		}
	}
}
	if(l==0){
		cout<<posma<<' '<<posma;
		return 0;
	}
	cout<<l<<' '<<r;
}