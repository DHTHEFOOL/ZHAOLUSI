#include<bits/stdc++.h>
using namespace std;
long long const N=1e9+7;
long long n,a[1000001];
int main()
{
 freopen("MINPRODUCT.inp","r",stdin); freopen("MINPRODUCT.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    sort(a+1,a+1+n);
   
    cout<<min( min( a[1]*a[2],a[1]*a[n] ),a[n]*a[n-1]);
}
   