#include<bits/stdc++.h>
using namespace std;
long long n,m,dem1[10],dem2[10],a[1000001],b[1000001],ans;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
     freopen("chia6.inp", "r", stdin);
    freopen("chia6.out", "w", stdout);
    cin>>n>>m;
    for(long long i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]%6==0) dem1[6]++;
        if(a[i]%3==0 and a[i]%6!=0) dem1[3]++;
        if(a[i]%2==0 and a[i]%6!=0) dem1[2]++;

    }
    for(long long i=1;i<=m;i++){
        cin>>b[i];
        if(b[i]%2==0 and b[i]%6!=0) dem2[2]++;
        if(b[i]%3==0 and b[i]%6!=0) dem2[3]++;
        if(b[i]%6==0) dem2[6]++;
    }
    cout<<dem1[6]*m+dem2[6]*(n-dem1[6])+dem1[3]*dem2[2]+dem1[2]*dem2[3];
}

