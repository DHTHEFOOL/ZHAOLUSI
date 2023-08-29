#include<bits/stdc++.h>
using namespace std;
const long long N=1e7;
long long n,dem;
pair<double,double>x[N];
int main(){
ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("meetplace.INP","r",stdin);freopen("meetplace.OUT","w",stdout);
cin>>n;
for(long long i=1;i<=n;i++) cin>>x[i].first;//quangduong
for(long long i=1;i<=n;i++) cin>>x[i].second;//vantoc
sort(x+1,x+1+n);
double a=x[n].first-x[1].first;//quangduong
double c,b,d,y,t;
c=abs(x[1].second-x[n].second);//vantoccungchieu
d=x[1].second+x[n].second;//diemgapkhinguocchieu
y=(a/d)*x[1].second+x[1].first;//diemgapkhinguocchieu
if(x[1].second==x[n].second) cout<<setprecision(6)<<fixed<<a/d;
else{
if(c!=0 and x[1].second>x[n].second) {b=(a/c)*x[n].second+x[n].first;t=1;}//tgchayduoi
else if(c!=0 and x[1].second<x[n].second){b=x[1].first-((a/c)*x[1].second);t=2;}
for(long long i=2;i<=n-1;i++){
   if(abs(x[i].first-y)!=x[i].second*(a/d)){cout<<setprecision(6)<<fixed<<a/c;dem++;break;}
  if((t==1 and x[i].first+x[i].second*(a/c)!=b) or (t==2 and x[i].first-x[i].second*(a/c)!=b)){cout<<setprecision(6)<<fixed<<a/d;dem++;break;}
}
if(dem==0)cout<<setprecision(6)<<fixed<<min(a/c,a/d);
}
}


