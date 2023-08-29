#include<bits/stdc++.h>
using namespace std;
long long ans=1,n,dem,a,b;
string s;
long long modk=1e9+7;
long long f[1000][20];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    freopen("incx.Inp", "r", stdin);
        freopen("incx.Out", "w", stdout);
     for(long long j=1;j<=9;j++) f[1][j]=j;
        for(long long i=2;i<=1000;i++) f[i][2]=i+1;
     for(long long i=2;i<=1000;i++){
            f[i][1]=1;
        for(long long j=3;j<=9;j++){
            f[i][j]=f[i-1][j]+f[i][j-1];
        }
     }

getline(cin,s);
   n=s.size();
    s="1"+s+"9";
    for(long long i=1;i<=n+1;i++){
        if(s[i]=='?' and s[i-1]!='?'){
                a=(long long)s[i-1]-48;
                dem=1;
        }
                else if(s[i]=='?' and s[i-1]=='?') dem++;

         else if(s[i-1]=='?' and s[i]!='?'){
            b=(long long)s[i]-48;
            ans*=(f[dem][b-a+1]%modk);
          //cout<<f[dem][b-a+1]%modk<<endl;
            }
    }
    cout<<ans%modk;
}

