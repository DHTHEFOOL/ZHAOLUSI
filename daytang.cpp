#include<bits/stdc++.h>
using namespace std;
int n, d, ans;
int f[2005], a[2005];
vector<int>v;
int main()
{
    freopen("Daytang.inp","r",stdin);
    freopen("Daytang.out","w",stdout);
    cin>>n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    f[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        f[i] = 1;
        for(int j = i-1; j >= 1; j--)
        {
            if(a[i] > a[j])
                f[i] = max(f[i], f[j] + 1);
        }
        if(f[i] >= ans){ans = f[i]; d = i;}
    }
    cout << ans << endl;
    v.push_back(d);
    for(int i = d-1; i >= 1; i--)
    {
        if(f[i] + 1 == ans) {v.push_back(i); ans--;}
    }
    for(int i = v.size() - 1; i >= 0; i--)
        cout << v[i] << ' ';
}
