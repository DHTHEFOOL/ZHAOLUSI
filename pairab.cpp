#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
 long long n,a[500001],b[500001],c[500001],k,m,d[500001],ans;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("pairab.Inp", "r", stdin);freopen("pairab.Out", "w", stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n;i++)
    cin>>b[i];
    for(int i=1;i<=n;i++)
    {
        c[i]=a[i]-b[i];
    }
    for(int i=1;i<=n;i++)//-2 -1 0 3 5 
    d[i]=-1*c[i];
    sort(c+1,c+1+n);// 2 1 0 -3 -5
    sort(d+1,d+1+n);
    reverse(d+1,d+1+n);
    for(int i=1;i<=n;i++)
    {
        int l=1,r=i-1,ans1=0;
    while(l<=r)
    {	
        int mid=(l+r)/2;
        if(d[mid]>=c[i])l=mid+1;
        if(d[mid]<c[i]){ans1=mid,r=mid-1;}
    }
  //  cout<<ans1<<endl;
    if(ans1!=0)
   ans+=i-ans1;
    }
    cout<<ans;
	}