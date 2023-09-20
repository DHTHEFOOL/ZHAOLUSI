	#include<bits/stdc++.h>
	using namespace std;
	double k;
	string s,g;
	map<char,double> mp,ct;
	double f[100005],ans;
	int main(){
		 ios::sync_with_stdio();cin.tie(0);cout.tie(0);
	    freopen("matdo.INP","r",stdin);freopen("matdo.OUT","w",stdout);
	
		cin>>k;
		long long r=k;
		cin>>s;
		long long t=s.size();
		s=" "+s;
		for(long long i=1;i<=r;i++){
			mp[s[i]]++;
			if(mp[s[i]]==1) f[1]++;
		}
		ans=f[1];
		g=s.substr(1,r);
		for(long long i=r+1;i<=t;i++){
			f[i-r+1]=f[i-r];
			mp[s[i-r]]--;
			if(mp[s[i-r]]==0) f[i-r+1]-=1;
			mp[s[i]]++;
			
			if(mp[s[i]]==1) f[i-r+1]+=1;
			if(f[i-r+1]>ans){
				 g=s.substr(i-r+1,r);
				ans=f[i-r+1];
				
	}
	}
	/*for(long long i=1;i<=t-r+1;i++){
		cout<<"f["<<i<<"]= "<<f[i]<<endl;
	}*/
	cout<<fixed<<setprecision(3)<<ans/k<<'\n'<<g;
	}