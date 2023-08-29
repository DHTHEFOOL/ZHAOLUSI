#include<bits/stdc++.h>
using namespace std;
long long n, a[100004];
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("ChuyenSoi3.Inp","r",stdin); freopen("ChuyenSoi3.Out","w",stdout);
    cin>>n;
    
  for(long long i=1;i<=n;i++) cin>>a[i];
  long long j=1;
  long long ans=0;
  for(long long i=1;i<=n;i++){
  	if(a[i]>0) continue;
  	while(a[j]<=1)j++;
  	ans+=abs(i-j);
  	a[j]--;
}
cout<<ans;

}