#include<bits/stdc++.h>
using namespace std;
long long n,m,resa,resb;
void doit(long long a){
    long long b=n/a*m;
    if(__gcd(a,b)==m and a+b<resa+resb){
        resa=a;resb=b;}
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     freopen("tongnn.inp", "r", stdin);
    freopen("tongnn.out", "w", stdout);
  resa=resb=1e12;
    cin>>m>>n;
    for(long long i=1;i<=sqrt(n);i++){
            if(n%i==0){
        if(i%m==0) doit(i);
            if(n/i%m==0) doit(n/i);
    }
    }
    if(resa+resb==2e12) cout<<-1;
    else cout<<resa+resb;
    }
