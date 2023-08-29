#include<bits/stdc++.h>
using namespace std;
int n, b[100009], g[100009];
string s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    freopen("BoyGirl.inp", "r", stdin);
    freopen("BoyGirl.out", "w", stdout);
    cin >> n;
    cin >> s;
    int cb = 0, cg = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'B')
        {
            b[++cb] = i;
        }
        else g[++cg] = i;
    }
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'B')
        {
            if(cg == 0)continue;
            int l = 1, r = cg, mid, ans = -1;
            while(l <= r)
            {
                mid = (l + r) / 2;
                if(g[mid] < i)
                {
                    ans = mid;
                    l = mid + 1;
                }
                else r = mid - 1;
            }
            int rep = 1e9;
            if(ans != -1)
            {
                rep = min(rep , i - g[ans]);
                if(ans < cg)rep = min(rep, g[ans + 1] - i);
            }
            else
            {
                rep = g[1] - i;
            }
            cout << rep - 1 << " ";
        }
        else
        {
            int l = 1, r = cb, mid, ans = -1;
            while(l <= r)
            {
                mid = (l + r) / 2;
                if(b[mid] < i)
                {
                    ans = mid;
                    l = mid + 1;
                }
                else r = mid - 1;
            }
            int rep = 1e9;
            if(ans != -1)
            {
                rep = min(rep , i - b[ans]);
                if(ans < cb)rep = min(rep, b[ans + 1] - i);
            }
            else
            {
                rep = b[1] - i;
            }
            cout << rep - 1 << " ";
        }
    }
}
