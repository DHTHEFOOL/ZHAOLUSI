#include<bits/stdc++.h>
using namespace std;
int n,m,a[100005],b[100005],c[1000005],k,dem;
void sub1()
{
    for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                dem++,c[dem]=a[i]+b[j];
    sort(c+1,c+1+dem);
    for(int i=1;i<=k;i++) cout<<c[i]<<" ";
}
void sub2()
{
vector<int> v;
long long i=1,j=1,dem=0;
while ((i<=n or j<=m) and dem<k+2*(m+n))
    {
        if(j==m+1 or (i<=n and a[i]<=b[j]))
        {
            long long r=1;
            while (dem<k+2*(m+n) and r<j)
                v.push_back(b[r]+a[i]),dem++,r++;
            if(dem==k) break ;
            i++;
        }
        else
        {
            long long  l=1;
            while (dem<k+2*(m+n) and l<i)
                v.push_back(a[l]+b[j]),dem++,l++;
            if(dem==k) break ;
            j++;
        }
    }
sort(v.begin(),v.end());
for(int i=0;i<k;i++)
    cout<<v[i]<<" ";
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
     freopen("KPAIR.inp","r",stdin);freopen("KPAIR.out","w",stdout);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
        cin>>b[i];
    sort(a+1,a+1+n);sort(b+1,b+1+m);
    cin>>k;
    if(n<=1000 and m<=1000) sub1();
    else sub2();
}