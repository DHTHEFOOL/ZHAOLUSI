#include<bits/stdc++.h>
using namespace std;
long long modk=1e9+7;
long long n,f[1000001];
string s;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("jumpn2.inp","r",stdin);freopen("jumpn2.out","w",stdout);
   cin>>n;
   cin>>s;
   s=" "+s;
   if(s[1] == '1')f[1] = 1;
   if(s[2] == '1')f[2] = 1 + f[1];
   f[0] = 1;
   for(long long i=3;i<=n;i++){
         if(s[i] == '1')f[i]=(f[i-1]+f[i-2]+f[i-3])%modk;
   //	 cout<<"f["<<i<<"]= "<<f[i]<<endl;
   }
   cout<<(f[n]+modk)%modk;
}
