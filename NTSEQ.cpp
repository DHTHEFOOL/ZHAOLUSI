#include<bits/stdc++.h>
using namespace std;
int n, a[100009];
bool nt[10000009];
void snt(int m)
{
    memset(nt, true, sizeof nt);
    nt[0] = nt[1] = false;
    for(int i = 2; i <= sqrt(m); i++)
    {
        if(nt[i])
        {
            int e = i;
            while(e * i <= m)
            {
                nt[e * i] = false;
                e++;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("NTSEQ.INP","r",stdin);freopen("NTSEQ.OUT","w",stdout);
    snt(1000000);
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(a[i] < 0)
        {
            continue;
        }
        else
        {
            if(nt[a[i]])
            {
                cout << a[i] << " ";
                cnt++;
            }
        }
    }
    if(cnt == 0)cout << "no prime";
}