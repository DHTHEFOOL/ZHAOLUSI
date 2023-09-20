#include<bits/stdc++.h>
using namespace std;
long long n,a[105],ans;
const long long N=1e6+5;
bool f[N];
long long used[20],x[20],b[20];
long long tinh,t;
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
long long xuly(){
	tinh=0;
	for(long long i=0;i<t;i++){
		tinh=tinh*10+x[i];
	}
	return tinh;
	//if(f[tinh]) return true;
	 //return false;
//	cout<<tinh<<endl;
}
bool check(long long h){
	for(long long i=0;i<t;i++){	
		if(used[i]==0)
		{
			x[h]=vt[i];
			used[i]=1;
			if(h==t-1)	if(f[tinh]) {return true;}
			
		}else check(h+1);
		used[i]=0;
	}
	return false;
}

int main(){
	 ios::sync_with_stdio();cin.tie(0);cout.tie(0);
    //freopen("swapprime.INP","r",stdin);freopen("swapprime.OUT","w",stdout);
    cin>>n;
    sang();
    for(long long i=1;i<=n;i++){
    	memset(x,0,sizeof(x));
    	memset(used,0,sizeof(used));
    	cin>>a[i];
    if(f[a[i]]) { ans++; continue;}
	else
	{
		if(a[i]<=9)continue;
		else{
    	long long h=a[i];
    	vt.clear();
    	while(h>0){
    		vt.push_back(h%10);
    		h/=10;
		}
			 t=vt.size();
    	if(check(0)); 
		{
		ans++; continue;
		}
	}
	}
}

	cout<<ans;
}