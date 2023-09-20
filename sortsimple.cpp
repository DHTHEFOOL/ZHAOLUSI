#include<bits/stdc++.h>
using namespace std;
string s;
vector<long long> vt;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("sortsimple.inp","r",stdin);
	freopen("sortsimple.out","w",stdout);
	cin>>s;
	long long n=s.size();
	s=" "+s;
	for(long long i=1;i<=n;i++){
		if(s[i]>='0' and s[i]<='9') vt.push_back((long long)s[i]-'0');
	}
	sort(vt.begin(),vt.end());
	long long m=0;
	for(long long i=1;i<=n;i++){
			if(s[i]>='0' and s[i]<='9'){
				cout<<vt[m];
				m++;
			}else cout<<s[i];
	}
}