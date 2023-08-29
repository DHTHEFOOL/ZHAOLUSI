#include<bits/stdc++.h>
using namespace std;
const long long N=1e7;
long long n,a[N],maxx=-1e9,sum[N],minn=1e9;
int main(){
      ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(long long i=1;i<=n;i++){
        cin>>a[i];
        maxx=max(maxx,a[i]);
        minn=min(minn,a[i]);
    }
    for(long long i=1;i<=maxx;i++){
        for(long long j=max(i,((minn+i-1)/i));j<=maxx;j+=i)
            sum[j]+=i;
    }
    for(long long i=1;i<=n;i++){
            cout<<sum[a[i]]<<' ';
}
}

