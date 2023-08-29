#include<bits/stdc++.h>
using namespace std;
int n,t,sum,ans=0,m;
int a[100005],f[100005];
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>t;
    for(int i=1;i<=n;i++) cin>>a[i];
    int m=1;
    while(a[m]>=t){
        if(a[m]==t){f[m]=1;m++;}
        if(a[m]>t){f[m]=0;m++;}
    }
    for(int i=m;i<=n;i++){
            ans=max(ans,f[i-1]);
        sum+=a[i];
        if(sum<=t) f[i]=f[i-1]+1;
        else{
            while(sum>t){
            sum-=a[m];m++;
            }
            f[i]=i-m+1;
    }

}
ans=max(ans,f[n]);
cout<<ans;
}
