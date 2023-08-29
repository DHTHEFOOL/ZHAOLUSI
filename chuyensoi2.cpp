#include<bits/stdc++.h>
#include<bits/stdc++.h>
#define fi first
#define se second
const int maxx=1e9,minx=-1e9;
const int N=1e5+5;
using namespace std;
int n,a[N],j,l,r,l1,r1;
long long ans;
void start()
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("CHUYENSOI2.inp","r",stdin);freopen("CHUYENSOI2.out","w",stdout);
}
int main()
{
	start();
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	   cin>>a[i];
	   if(a[i]!=0 and l==0) l=i,l1=a[l];
	   if(a[i]!=0 and l!=0) r=i,r1=a[r];
	}
	for(int i=1;i<l;i++)
	   {
	   	if(a[i]==0)
	   	{
	     	if(a[l]>1) ans+=abs(l-i),a[l]--;
	   	    else ans+=abs(r-i),a[r]--;
	   	}
	   }
	for(int i=n;i>r;i--)
	{
		if(a[i]==0)
		{
			if(a[r]>1) ans+=abs(r-i),a[r]--;
			else ans+=abs(l-i),a[l]--;
		}
	}
	for(int i=l+1;i<=r-1;i++)
	{
		if(a[l]>1 and a[r]>1)
		{
		int temp=min(abs(l-i),abs(r-i));
		ans+=temp;
		if(temp==abs(l-i)) {a[l]--;continue;}
		if(temp==abs(r-i)) {a[r]--;continue;}
		}
		else
		{
			if(a[l]>1) ans+=abs(l-i);
			if(a[r]>1) ans+=abs(r-i);
		}
	}
	cout<<ans;
}

