#include<bits/stdc++.h>
using namespace std;
long long n;
const long long N=1e6;
long long f[N];
int main(){
      ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     // freopen("stair1.inp", "r", stdin); freopen("stair1.out", "w", stdout);
   cin>>n;
   f[1]=1;
   f[2]=2;
   f[3]=3;
   f[4]=4;
   f[5]=5;
   for(long long i=6;i<=n;i++){
    f[i]=f[i-1]+f[i-2]-f[i-4]-f[i-5];
   }
   cout<<f[n];
}
