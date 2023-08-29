#include<bits/stdc++.h>
using namespace std;
long long n,a[210000],ans=0;
map<int,long long> p;
int k;
int main()
{
    freopen("paireq.inp","r",stdin);
    freopen("paireq.out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        if(i>k+1)
        {
            p[a[i-k-1]]--;
        }
        ans+=p[a[i]];
        p[a[i]]++;
        //cout<<ans;
    }
    cout<<ans;
}
