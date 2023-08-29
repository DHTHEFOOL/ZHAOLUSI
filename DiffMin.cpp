#include<bits/stdc++.h>
using namespace std;
int t, n, m, a[100009], b[100009];
int solve()
{
    int max1 = 1e9;
    for(int i = 1; i <= n; i++)
    {
        int l = 1, r = m, mid, ans = 0;
        while(l <= r)
        {
            mid = (l + r) / 2;
            if(b[mid] <= a[i])
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if(ans != 0)
        {
            max1 = min(max1, abs(a[i] - b[ans]));
        }
        if(ans != m)
        {
            max1 = min(max1, abs(a[i] - b[ans + 1]));
        }
    }
    return max1;
}
int main()
{
    freopen("DiffMin.inp", "r", stdin);
    freopen("DiffMin.out", "w", stdout);
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)cin >> a[i];
        cin >> m;
        for(int i = 1; i <= m; i++)cin >> b[i];
        cout << solve() << endl;
    }
}
a1+a2+a3+..+aj-(a1+...+ai-a1-...-aj)




