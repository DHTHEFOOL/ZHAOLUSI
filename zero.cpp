#include<bits/stdc++.h>
using namespace std;
int n,q;
const int N=1e6+5;
bool f[N];
void sang(){
	memset(f,true,sizeof(f));
	f[0]=f[1]=false;
	for(int i=2;i<=sqrt(N);i++){
		if(f[i]==true){
		for(int j=i*i;j<=N;j+=i){
			f[j]=false;
		}
	}
	}
}
int lan(int a){
	if(a==1) return 1;
	else if(a==2) return 2;
	else if(a==3) return 3;
	else if(f[a]) return lan(a-1);
	else{
		int t=sqrt(a),h;
		for(int i=t;i<=a;i++){
			if(a%i==0){
				h=max(a/i,i);
				break;
			}
		}
		return lan(h)+1;
	}	
}
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("Zero.inp","r",stdin);
	freopen("Zero.out","w",stdout);
	cin>>q;
	sang();
	while(q--)
	{
		cin>>n;
		cout<<lan(n)<<'\n';
	}
}