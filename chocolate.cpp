#include<bits/stdc++.h>
using namespace std;
int n,x,y,k,a[100005],b[100005],dem;
long long ans,sum;
int main()
{
freopen("Chocolate.INP","r",stdin);freopen("Chocolate.OUT","w",stdout);
    cin>>n>>x>>y>>k;
    for(int i=1;i<=n;i++)
        {
        cin>>a[i];
        if(a[i]>=x and a[i]<=y) {dem++;b[dem]=a[i];}
        }
    sort(b+1,b+1+dem);
    for(int j=1;j<=dem;j++)
        if(sum+b[j]<=k)
              {sum+=b[j];ans++;}
        else break;
    cout<<ans;
}