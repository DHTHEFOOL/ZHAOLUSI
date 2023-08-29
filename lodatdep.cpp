#include<bits/stdc++.h>
using namespace std;
int m,n,x,y;
long long a[505][505];
int b[505][505];
int ans,dem[9];
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++) {
                cin>>a[i][j];
            b[i][j]=(a[i][j]%9+b[i-1][j]%9+b[i][j-1]%9-b[i-1][j-1]%9+9)%9;
    }
    }
   for (int l = 1; l <= n; l++) {
        for (int r = l; r <= n; r++) {
           for(int t=0;t<9;t++) dem[t]=0;
            for (int j = 1; j <= m; j++) {
                dem[(b[j][r] - b[j][l-1]+9)%9]++;
                if((b[j][r] - b[j][l-1]+9)%9==0) ans++;
                }
            for(int t=0;t<9;t++){
                if(dem[t]>1) ans+=(dem[t]*(dem[t]-1))/2;
            }
            }
        }

cout<<ans;
}

