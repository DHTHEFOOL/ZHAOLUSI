#include<bits/stdc++.h>
using namespace std;
long long n;
const long long N=1e7;
long long a[N],b,c,d;
long long res;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
for(long long i=1;i<=n;i++){
    cin>>a[i];
}
sort(a+1,a+1+n);
for(long long i=1;i<=n-3;i++){
    b=a[i+1]-a[i];
    c=a[i+3]-a[i+2];
    d=__gcd(b,c);
    res=__gcd(res,d);
}
cout<<res;
}
