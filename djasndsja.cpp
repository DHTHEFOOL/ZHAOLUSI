#include<bits/stdc++.h>
using namespace std;
long long a[100000],n,x,ans;
int main(){
cin>>n;
cin>>x;
for(long long i=1;i<=n;i++){
cin>>a[i];
if(a[i]==x) ans++;
}
cout<<ans;
}
