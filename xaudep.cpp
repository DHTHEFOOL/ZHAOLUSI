#include<bits/stdc++.h>
using namespace std;
long long n,k,t,x,y;
long long f[100002];
int main(){
    f[1]=1;
    for(long long i=1;i<=100002;i++){
        f[i]=(i+1)*i/2;
    }
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(long long i=1;i<=n;i++){
            if(k<=f[i]){
                x=n-i-1;
                y=n-k+f[i-1];
                break;
            }
        }
        for(long long j=0;j<n;j++){
            if(j==x or j==y) cout<<'b';
            else cout<<'a';
        }
        cout<<'\n';
    }
}
