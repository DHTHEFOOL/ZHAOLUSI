#include<bits/stdc++.h>
using namespace std;
long long t;
long long a,b;
string s;
int main(){
    ios::sync_with_stdio();cin.tie(0);cout.tie(0);
    freopen("ngoacdung.INP","r",stdin);freopen("ngoacdung.OUT","w",stdout);
    cin>>t;
    while(t--){
    	cin>>s;
    	a=0;
    	b=0;
    	for(long long i=0;i<s.size();i++){
    		if(s[i]=='(') a++;
    		else b++;
    		if(a<b) break;
		}
		if(a==b) cout<<"Yes"<<'\n';
		else cout<<"No"<<'\n';
	}
}