#include<bits/stdc++.h>
using namespace std;
int n;
const long long N=1e6;
bool f[N];
void snt(long long a){
	for(long long i=1;i<=a;i++) f[i]=true;
	f[1]=false;
	f[0]=false;

	for(long long i=2;i<=a;i++){
		if(f[i]==true){
			for(long long j=i*i;j<=a;j+=i){
				f[j]=false;
			}
		}
	}
	//for(int i=1;i<=a;i++) {
//		if(f[i]==false) cout<<i;
//	}
}
int main(){
	int m=0,h=0;
	snt(N);
	cin>>n;
	for(long long i=2;i<=501;i++){
		if(f[i]==true){
			h++;
			if(f[h]==true) {
				m++;
				if(m==n) {
					cout<<i;
					break;
				}
			}
		
	}
}
}