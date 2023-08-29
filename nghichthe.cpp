#include<bits/stdc++.h>
using namespace std;
int n, a[200009], dem = 0;
long long get_merge(int l, int m, int r)
{
    long long s = 0, benphai = 0;
    vector<int> ds;
    int i = l, j = m + 1;
    while(i <= m or j <= r)
    {
        if(i > m){ds.push_back(a[j]); j++;continue;}
        if(j > r){ds.push_back(a[i]); i++;s += benphai;continue;}
        if(a[i] <= a[j]){ds.push_back(a[i]); i++; s += benphai;}
        else
        {
            ds.push_back(a[j]);
            j++;
            benphai++;
        }
    }
    for(int i = 0; i < ds.size(); i++)a[l + i] = ds[i];
    return s;
}
long long get_invert(int l, int r)// sap xep a[l]....a[r] tang dan
{
    if(l == r)return 0;
    int m = (l + r) / 2;
    long long x = get_invert(l, m);
    long long y = get_invert(m + 1, r);
    long long z = get_merge(l, m, r);
    return x + y + z;
}
int main()
{
    freopen("nghichthe.inp", "r", stdin);freopen("nghichthe.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++)cin >> a[i];
    cout << get_invert(1, n);
}
