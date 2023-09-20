 #include<bits/stdc++.h>
using namespace std;
long long n,k,dem=0;
long long a[100005],ans=0;
map<long long,long long>mp;
long long cnt=0;
long long powx(long long a,long long b){
	if(b==0) return 1;
	long long res=powx(a,b/2);
	if(b%2==1){
		return res*res*a;
	}else return res*res;
}
int main(){
	mp.clear();	
	cin>>n>>k;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
			}
	for(long long i=1;i<=n;i++){	
		if(a[i]==1){
			ans+=mp[1];
		mp[1]++;
	}
		else{
				long long dem1=a[i],t=1,f=1;
			for(long long j=2;j<=sqrt(a[i]);j++){
				long long dem2=0;
				if(dem1%j==0){
					while(dem1%j==0){
						dem1/=j;
						dem2++;
					}
				 				                                            //6 3																
				if(dem2%k!=0){                                     //1 3 9 8 24 1
					t*=powx(j,dem2%k);                             //1 1 3 8 9 24 
					f*=powx(j,k-(dem2%k));         
				//	cout<<"f= "<<f<<" t= "<<t<<endl;                   
				}
			}
		}
			if(dem1>1){
				t*=dem1;
				f*=powx(dem1,k-1);		
			}
				ans+=mp[f];
			//	cout<<"mp["<<f<<"]= "<<mp[f]<<" ,ans= "<<ans<<endl;
				mp[t]++;
				
			}
	}
//	cout<<dem<<'\n';
		cout<<ans;
	}