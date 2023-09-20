#include<bits/stdc++.h>
using namespace std;
long long x,y,q;
int main(){
	 ios::sync_with_stdio();cin.tie(0);cout.tie(0);
    freopen("demcp.INP","r",stdin);freopen("demcp.OUT","w",stdout);
   cin>>q;
   while(q--){
   	cin>>x>>y;
   	long long l=sqrt(x);
   	long long r=sqrt(y);
   	if(l*l<x){
   		cout<<r-l<<'\n';
   }else cout<<r-l+1<<'\n';
}
}