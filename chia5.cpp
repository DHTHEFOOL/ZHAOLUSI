#include<bits/stdc++.h>
using namespace std;
long long n,m,dem1,dem2,a[1000001],b[1000001],ans;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     freopen("chia5.inp", "r", stdin);
    freopen("chia5.out", "w", stdout);
    cin>>n>>m;
    for(long long i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]%5==0) dem1++;
    }
    for(long long i=1;i<=m;i++){
        cin>>b[i];
        if(b[i]%5==0) dem2++;
    }
    cout<<dem1*m+dem2*(n-dem1);
}
