#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
long long n,k,a[N],dem1,b[N],tinh,dem2=1,coun,dem3=1;
int main(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        // freopen("taoso.inp", "r", stdin); freopen("taoso.out", "w", stdout);
     cin>>k>>n;
     for(long long i=1;i<=k;i++){
        cin>>a[i];
     }
     dem1=1;
     tinh=k*k;
     coun=k+k*k;
     for(long long i=1;i<=n;i++){
            if(i<=k){b[i]=a[i];}
            else{
        b[i]=b[i-dem1-k+dem2]*10+a[dem3];
        if(i==coun){
            dem1=1;
            tinh*=k;
            coun+=tinh;
            dem2=1;
        }
        dem1++;
        if(dem3==k){dem3=0;dem2++;}
        dem3++;

     }
     }
     cout<<b[n];
}
3
