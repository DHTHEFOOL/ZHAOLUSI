#include<bits/stdc++.h>
using namespace std;
long long t,h,w,a[101][101],f[101][101],x,y;
long long ans;
int main(){
    cin>>t;
    while(t--){
            memset(f,0,sizeof f);
            ans=-1e7;;
        cin>>h>>w;
        for(long long i=1;i<=h;i++){
            for(long long j=1;j<=w;j++){
                cin>>a[i][j];
            }
        }
     for(long long i=1;i<=h;i++){
            for(long long j=1;j<=w;j++){
                    long long k=f[i][j];
                    f[i][j]=max(f[i-1][j],max(f[i-1][j-1],f[i-1][j+1]))+a[i][j];
                   // if(k<=f[i][j]){ x=i,y=j;}
                   ans=max(ans,f[i][j]);
            }
     }

       cout<<ans<<endl;
    }
}
