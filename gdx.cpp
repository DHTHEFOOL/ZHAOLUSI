#include<bits/stdc++.h>
using namespace std;
long long q;
string s;
bool check(string r){
	long long t=r.size();
	string a,b;
	if(t%2!=0){
	 a=r.substr(0,t/2);
	 b=r.substr(t/2+1,t/2);
}else {
	 a=r.substr(0,t/2);
	 b=r.substr(t/2,t/2);
}
reverse(b.begin(),b.end());
	long long m=0;
	for(long long i=0;i<r.size()/2;i++){
		if(b[i]!=a[i])m++;
		if(m>2) break;
	}
	if(m>2) return false;
	return true;
}
int main(){
	 ios::sync_with_stdio();cin.tie(0);cout.tie(0);
    freopen("gdx.INP","r",stdin);freopen("gdx.OUT","w",stdout);
  cin>>q;
  while(q--){
  	cin>>s;
  	long long t=s.size();
  	s=" "+s;
  	long long c=0;
  	for(long long i=1;i<t;i++){
  		string a=s.substr(1,i);
  		string b=s.substr(i+1,t-i);
  		if(check(a)==true and check(b)==true){
  			cout<<1<<'\n';
  			c=1;
  			break;
		  }
	  }
	  if(c==0) cout<<0<<'\n';
	  //cout<<a<<' '<<b<<endl;
  }
}
//}