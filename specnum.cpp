#include<bits/stdc++.h>
using namespace std;
long long n,res;
const long long N=1e7;
long long a[N];
bool check(long long c){
        while(c%7==0)c/=7;
        while(c%5==0)c/=5;
        while(c%3==0)c/=3;
        while(c%2==0)c/=2;
        if(c>1) return false;
        else return true;

        }
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("specnum.inp", "r", stdin);
    freopen("specnum.out", "w", stdout);
    cin>>n;
    for(long long i=1;i<=n;i++) {
            cin>>a[i];
    if(check(a[i])) res+=a[i];
}
cout<<res;
}
