#include<bits/stdc++.h>
using namespace std;
long long n,d;
long long f[105][1005];
string s;
long long t=1;
long long ans,dem,m,mid;
bool check(long long a){
		for(long long j=1;j<=d-a+1;j++){
			long long r=0;
			for(long long i=1;i<=m;i++){
			if((f[i][j+a-1]-f[i][j-1])<=1) r++;
		}
		if(r==m) return true;
	}
return false;
}
int main(){
	cin>>n>>d;
	m=n;
	while(n--){
		cin>>s;
		s=" "+s;
		for(long long i=1;i<=d;i++){
			if(s[i]=='x') {
				f[m-n][i]=f[m-n][i-1]+1;
		}
		else f[m-n][i]=f[m-n][i-1];
	//	cout<<"f["<<m-n<<"]["<<i<<"]= "<<f[m-n][i]<<' ';
	}
}
	long long l=1,r=d;
	while(l<=r){
		mid=(l+r)/2;
		if(check(mid)){
			ans=mid;
			l=mid+1;
		//	cout<<mid<<' ';
		} else r=mid-1;
	}
	cout<<ans;		
}
