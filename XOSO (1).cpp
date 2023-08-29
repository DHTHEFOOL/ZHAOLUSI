#include<bits/stdc++.h>
using namespace std;
long long n, k, a[100009], cnk[100009][100];
const long long MOD = 1e9 + 7;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("XOSO.inp", "r", stdin);
    freopen("XOSO.out", "w", stdout);
    cin >> n >> k;
    for(long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    for(int i = 1; i <= n; i++)
    {
        cnk[i][1] = i;
        cnk[i][0] = 1;
    }
    for(int i = 2; i <= k; i++)
    {
        for(int j = i; j <= n; j++)
        {
            cnk[j][i] = (cnk[j - 1][i - 1] + cnk[j - 1][i]) % MOD;
        }
    }
    long long ans = 0;
    for(long long i = 1; i <= n; i++)
    {
        long long the;
        if(i >= k)
        {
           the  = cnk[i - 1][k - 1];
           ans = (ans + ((a[i] * the) % MOD)) % MOD;
        }
    }
    cout << ans;
}
