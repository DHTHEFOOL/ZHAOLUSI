	#include<bits/stdc++.h>
	using namespace std;
	long long n,ans,t,v;
	double a[100005];
	const double k=0.0000000001;
	void sub12(){
		for(long long i=1;i<=n-2;i++){
			for(long long j=i+2;j<=n;j++){
				if(((long long)a[i]+(long long)a[j])%2==0){
				long long l=i+1,r=j-1,mid;
				while(l<=r){
					mid=(l+r)/2;
					 t=a[mid];
					if(t==((long long)a[i]+(long long)a[j])/2){
						break;
					}
					else if(t>((long long)a[i]+(long long)a[j])/2){
						r=mid-1;      
					}else l=mid+1;
				}
				if(t==((long long)a[i]+(long long)a[j])/2) ans++;
		}
	}
	}
		cout<<ans;  
	}
	void sub3(){
		for(long long i=1;i<=n-2;i++){
			for(long long j=i+2;j<=n;j++){
				long long l=i+1,r=j-1,mid;
				while(l<=r){
					mid=(l+r)/2;
				 v=a[mid];
					if(abs(v-(a[i]+a[j])/2)<k){
						ans++;
						break;
					} else{
					if(v>(a[i]+a[j])/2){
						r=mid-1;      
					}else if(v<(a[i]+a[j])/2 ) l=mid+1;
				}
			//	if(abs(a[mid]-(a[i]+a[j])/2)<k) ans++;
		}
	}
	}
		cout<<ans;  
	}
	
	int main(){
		long long dem=0;
		cin>>n;
		for(long long i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]!=(long long)a[i]) dem++; 
		}
		sort(a+1,a+1+n);
		if(dem==0)
			sub12();
		else
			sub3();}
	
		