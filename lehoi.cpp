#include<bits/stdc++.h>
using namespace std;
int m,n,a[101],b[101];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    cin>>m;
    for(int j=1;j<=m;j++){
        cin>>b[j];
    }
    sort(b+1,b+1+m);
    int ans=0,x=1,y=1;
    while(x<=n){
        while(y<=m){
            if(abs(a[x]-b[y])<=1){ans++;x++;y++;break;}
            else{
                if(a[x]>b[y]) y++;
                else x++;
            }
            if (x>n) break ;
        }
if (y>m) break;
    }
    cout<<ans;
}
