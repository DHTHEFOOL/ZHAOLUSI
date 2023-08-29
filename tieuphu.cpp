#include<bits/stdc++.h>
using namespace std;
int n,ans=2;
int x[100005],h[100005];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x[i]>>h[i];
        }
        if(n==1) cout<<1;
        else{
        for(long long i=2;i<n;i++){
            if(x[i]-h[i]>x[i-1])ans++;
            else if(x[i]-h[i]<=x[i-1]){
                if(x[i]+h[i]<x[i+1]){ans++;x[i]=x[i]+h[i];}
            }
        }
        cout<<ans;
}
}
