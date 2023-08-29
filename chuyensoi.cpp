#include<bits/stdc++.h>
using namespace std;
 long long a[100005],n,dem;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    freopen("chuyensoi.Inp", "r", stdin);freopen("chuyensoi.Out", "w", stdout);
  cin>>n;
  for(long long i=1;i<=n;i++){
  	cin>>a[i];
  	if(a[i]!=0) dem=i;
  }
  cout<<(dem-1)*(dem)/2+(n-dem)*(n-dem+1)/2;
}
