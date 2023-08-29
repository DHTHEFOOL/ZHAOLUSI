#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
long long n,a[N],x;
int main(){
	cin>>n>>x;
	for(long long i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	long long l=1,r=n,mid=(l+r)/2;
	while(l<=r){
		mid=(l+r)/2;
		if(a[mid]==x){
		cout<<mid; 
		return 0;
	}
	else if(a[mid]>x) r=mid-1;
	else if(a[mid]<x) l=mid+1;
}
}