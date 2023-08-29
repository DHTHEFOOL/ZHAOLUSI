#include<bits/stdc++.h>
using namespace std;
const long long N=1e7;
long long n,k,a[N],ans,tich;
long long moda=1e9+7;
long long giaithua(long long b,long long A[N],)
{
    lognm=1;
      long long r=0,q;
      A[0]=1;
      for(long long i=2;i<=b;i++){
      for(long long j=0;j<m;j++){
           q=r;
           r=(A[j]*i+r)/10;
          A[j]=(A[j]*i+q)%10;
   }
     while(r>0){
          A[m]=r%10;
          m++;
          r=r/10;
   }
 }
        for(i=m-1;i>=0;i--) tich=
}
}
void modk(long long v,long long x){
    tich=giaithua(x)*((giaithua(x-v)*giaithua(v))%(moda-2));
}
int main(){
        ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("xoso.INP","r",stdin);freopen("xoso.OUT","w",stdout);
    cin>>n>>k;
    for(long long i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    reverse(a+1,a+1+n);
    for(long long i=1;i<=n;i++){
            modk(k-1,n-i);
        ans+=a[i]*tich;
    }
    cout<<ans%moda;
}

