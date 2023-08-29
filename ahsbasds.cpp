#include<bits/stdc++.h>
using namespace std;
string s;
long long ans=1,n,dem,a,b;
long long modk=1e9+7;
long long f[1005][20];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   // freopen("incx.Inp", "r", stdin);
     //   freopen("incx.Out", "w", stdout);
     for(long long j=1;j<=9;j++) f[1][j]=j;
        for(long long i=2;i<=1000;i++) f[i][2]=2+i-1;
     for(long long i=2;i<=1000;i++){
            f[i][1]=1;
        for(long long j=3;j<=9;j++){
            f[i][j]=f[i-1][j]+f[i][j-1];
        }
     }
     //for(long long i=1;i<=15;i++){
       //     cout<<endl;
     //for(long long j=1;j<=9;j++){
        //cout<<"f["<<i<<"]["<<j<<"]="<<f[i][j]<<' ';
     //}

cout<<'9'-'1';
     }
