#include <bits/stdc++.h>
using namespace std;
long long const maxx = 1e13;
long long m,n;
long long x1[1005],y1[1005],x2[1005],y2[1005],f[1005][1005];
long long gia(long long a,long long b,long long c,long long d){
    return (a-c)*(a-c)+(b-d)*(b-d);
}
int main(){
    cin>>m>>n;
    for(long long i=1;i<=m;i++)cin>>x1[i]>>y1[i];
    for(long long i=1;i<=n;i++) cin>>x2[i]>>y2[i];
    x1[0]=0;
    x2[0]=0;
    y1[0]=0;
    y2[0]=0;
     for(int i=0;i<=n;i++)
       for(int j=0;j<=n;j++)
           dp[i][j]=maxx;
    dp[0][0]=0;
    for(int i=0;i<=n-1;i++)
       for(int j=0;j<=i;j++)
        if()
        {
            dp[i+1][j]=min(dp[i+1][j],dp[i][j]+kc(i,i+1));
            dp[i+1][i]=min(dp[i+1][i],dp[i][j]+kc(j,i+1));
        }
}
 f[i][j]-->i là vị trí hiện tại của camp a, j là vị trí hiện tại của camp b
 f[i][j] là giá ít nhất phải trả tại thời điểm đang xét
