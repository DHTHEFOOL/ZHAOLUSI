#include<bits/stdc++.h>
using namespace std;
long long n,f[1000001][3];
const long long modk=1e9+7;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    f[1][0]=1;
    f[1][1]=1;
    f[2][0]=2;
    f[2][1]=2;
        for(long long i=3;i<=n;i++){
            f[i][1]=f[i-1][1]+f[i-1][0];
            f[i][1]=(f[i][1]+modk)%modk;
            f[i][0]=f[i-1][1]+f[i-2][1];
            f[i][0]=(f[i][0]+modk)%modk;
        }
        cout<<(f[n][1]+f[n][0])%modk;
}
