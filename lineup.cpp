#include<bits/stdc++.h>
using namespace std;
const long long N=1e7;
long long n,a[N],b[N],cl,s1,s2;
int main(){
      ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(long long i=1;i<=n;i++){
        cin>>a[i]>>b[i];
        s1+=a[i];
        s2+=b[i];
        if((a[i]+b[i])%2!=0)cl++;
        }
    if(s1%2==0 and s2%2==0) cout<<0;
    else if((s1%2==0 and s2%2==1) or (s1%2==1 and s2%2==0)) cout<<-1;
    else if(s1%2==1 and s2%2==1){
        if(cl==0) cout<<-1;
        else cout<<1;
    }
}
