#include<bits/stdc++.h>
using namespace std;
long long n,k;
const long long N=1e6;
long long x[N],a[N],f[N],dem[N],m;
pair<long long,long long> b[N];
int main(){
    cin>>n>>k;
    for(long long i=1;i<=n;i++){
        cin>>x[i];
    }
    sort(x+1,x+1+n);
    for(long long i=1;i<n;i++){
        b[i].first=x[i+1]-x[i];
        b[i].second=i;
        dem[x[i+1]-x[i]]++;
    }
    sort(b+1,b+n);
    reverse(b+1,b+n);
    f[1]=(x[n]-x[1])/2;
    f[n]=0;
      for(long long i=2;i<k;i++){
            while(dem[b[i]]--){

                a[i]=min()
            }
            f[i]=min(f[i-1],a[i]);
      }
      cout<<f[k];
}
