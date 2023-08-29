#include <bits/stdc++.h>
using namespace std;
long long const maxx = 1e13;
double  dp[5005][5005];
long long x[5005], y[5005];
int n;
double kc(int u, int v)
{
    return (double)sqrt((y[v]-y[u])*(y[v]-y[u])+(x[v]-x[u])*(x[v]-x[u]));
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("TAXI.inp","r",stdin);freopen("TAXI.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>x[i]>>y[i];
    x[0]=y[0]=0;
    for(int i=0;i<=n;i++)
       for(int j=0;j<=n;j++)
           dp[i][j]=maxx;
    dp[0][0]=0;
    for(int i=0;i<=n-1;i++)
       for(int j=0;j<=i;j++)
        if(dp[i][j]<maxx)
        {
            dp[i+1][j]=min(dp[i+1][j],dp[i][j]+kc(i,i+1));
            dp[i+1][i]=min(dp[i+1][i],dp[i][j]+kc(j,i+1));
        }
    double ans=maxx;
    for(int i=0;i<=n;i++) ans=min(ans,dp[n][i]);
    cout<<setprecision(3)<<fixed<<ans;
    return 0;

}
