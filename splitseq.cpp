#include<bits/stdc++.h>
using namespace std;
long long a[2005], dp[2005][2005], mx=-1e9;
long long n, k;
int main(){
    cin >> n >> k;
    dp[0][1] = -1e9-2;
    for(long long i = 1; i <= n; i++)cin >> a[i];
    for(long long i = 1; i <= k; i++)dp[i][i] = dp[i - 1][i - 1] + a[i];
    for(long long i = 1; i <= n; i++)dp[i][1] = max(dp[i - 1][1], a[i]);
    for(long long t = 2; t <= k; t++)
    {
        for(long long i = t + 1; i <= n; i++)
        {
            dp[i][t] = dp[i - 1][t - 1] + a[i];
            mx = a[i];
            for(long long j = i; j >= t; j--)
            {
                mx = max(mx, a[j]);
                dp[i][t] = min(dp[i][t] , dp[j - 1][t - 1] + mx);
            }

        }
    }
  
    cout << dp[n][k];
}