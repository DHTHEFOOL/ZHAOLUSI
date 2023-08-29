#include<bits/stdc++.h>
using namespace std;
int n,a[4],y,x;
int ans=-1e7;
int main(){
  cin>>n;
  for(long long i=1;i<=3;i++) cin>>a[i];
sort(a+1,a+4);
x=n/a[1];
if(n%a[1]==0) cout<<x;
else{
for(long long i=x;i>=0;i--){
    y=(n-a[1]*i)/a[2];
    if((n-a[1]*i)%a[2]==0){cout<<i+y;break;}
    else {
        for(long long j=y;j>=0;j--){
            if((n-a[1]*i-a[2]*j)%a[3]==0){ ans=i+j+(n-a[1]*i-a[2]*j)/a[3];break;}
        }
        if(ans!=-1e7){cout<<ans;break;}
}
}
}
}


