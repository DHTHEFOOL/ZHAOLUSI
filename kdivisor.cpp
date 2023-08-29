#include<bits/stdc++.h>
using namespace std;
int q, tk[5000009], ans[5000009][10];
void solve()
{
    int l, r, k;
    cin >> l >> r >> k;
    cout << ans[r][k] - ans[l - 1][k] << '\n';
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("KDivisor.inp", "r", stdin);
    freopen("KDivisor.out", "w", stdout);
    int n = 5000000;
    for(int i = 1; i <= n; i++)tk[i] = 1;
    for(int i = 2; i <= n; i++)
    {
        int e = 1;
        while(e * i <= n)
        {
            tk[e * i]++;
            e++;
        }
    }
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            ans[j][i] = ans[j - 1][i];
            if(tk[j] == i)ans[j][i]++;
        }
    }
    cin >> q;
    while(q--)
    {
        solve();
    }
}
