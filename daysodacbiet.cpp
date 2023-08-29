#include<bits/stdc++.h>
using namespace std;
//const int N=1e7;
int n,a[5005],b[5005],f[5005][5005],dem,d[5005],ans;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
            cin>>a[i];
            f[i][i]=0;
    }
    for(long long t=1;t<n;t++){
        for(long long i=1;i<=n-t;i++){
                if(a[i]==a[i+t]){
            f[i][i+t]=f[i+1][i+t-1];
        }else f[i][i+t]=min(f[i][i+t-1],f[i+1][i+t])+1;
        //cout<<"f["<<i<<"]["<<i+t<<"]="<<' '<<f[i][i+t]<<' ';
    }
    //cout<<endl;
    }

     cout<<f[1][n];
}
